#ifndef __COMMON_MD5__
#define __COMMON_MD5__
//********  使用md5算法校验文件 ********//

#include <openssl/md5.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

#define MD5_BUFFER_LEN 1024    //每次读取文件的数据长度
#define MD5_SUM_LEN 16    //md5输出的字符串长度



class openssl_md5
{
public:
    openssl_md5()
    {
        m_fp = NULL;
        p_data = (unsigned char*)malloc(MD5_BUFFER_LEN);
    }
    ~openssl_md5()
    {
        if (NULL != m_fp)
        {
            fclose(m_fp);
            m_fp = NULL;
        }
        free(p_data);
    }

    //input:   s 绝对路径的文件名 
    //return: 0 -fail, 1 success
    //note:    变量清零
    int init(const char* s)
    {
        //判断空指针和空文件
        if (NULL == s || 0 == s[0])
        {
            printf("filename input error!");
            return 0;
        }

        //初始化结构体
        MD5_Init(&m_md5_ctx);

        if (NULL != m_fp)
        {
            fclose(m_fp);
            m_fp = NULL;
        }

        //打开文件
        m_fp = fopen(s, "r");
        if (NULL == m_fp)
        {
            printf("open [%s] failed!, %s\n", s, strerror(errno));
            return 0;
        }

        memset(m_md5_result, 0, MD5_SUM_LEN);
        m_cnt = 0;
        return 1;
    }

    //input: s 绝对路径的文件名
    //return: 文件的大小
    //note: 取文件大小
    int getFileSize(const char* s)
    {
        //判断空指针和空文件
        if (NULL == s || 0 == s[0])
        {
            printf("filename input error!");
            return 0;
        }
        struct stat _buf;
        stat(s, &_buf);
        return _buf.st_size;
    }

    //input: N/A
    //output: 已经计算的字节数
    //note: 读一次文件返回已经处理的字节数
    int updateOnce()
    {
        int _len = fread(p_data, 1, MD5_BUFFER_LEN, m_fp);
        if (_len == 0)
        {
            return 0;    //表示文件结束
        }
        MD5_Update(&m_md5_ctx, p_data, _len);
        m_cnt += _len;
        return m_cnt;
    }

    //input: N/A
    //output: N/A
    //note: 处理所有文件
    void updateAll()
    {
        int _len = 0;
        while (0 != (_len = fread(p_data, 1, MD5_BUFFER_LEN, m_fp)))
        {
            MD5_Update(&m_md5_ctx, p_data, _len);
        }
    }

    //得到最终md5 值
    void final ()
    {
        MD5_Final(m_md5_result, &m_md5_ctx);
    }

    void show()
    {
        for (int i = 0; i < MD5_SUM_LEN; i++)
        {
            printf("%02x", (unsigned char)m_md5_result[i]);
        }
        printf("\n");
    }

    //取最终md5值
    const unsigned char* getResult() const
    {
        return m_md5_result;
    }

private:

    MD5_CTX m_md5_ctx;

    unsigned char m_md5_result[MD5_SUM_LEN];

    FILE *m_fp;

    unsigned char *p_data;

    int m_cnt;
};

#endif