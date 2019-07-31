#ifndef __COMMON_MD5__
#define __COMMON_MD5__
//********  ʹ��md5�㷨У���ļ� ********//

#include <openssl/md5.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

#define MD5_BUFFER_LEN 1024    //ÿ�ζ�ȡ�ļ������ݳ���
#define MD5_SUM_LEN 16    //md5������ַ�������



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

    //input:   s ����·�����ļ��� 
    //return: 0 -fail, 1 success
    //note:    ��������
    int init(const char* s)
    {
        //�жϿ�ָ��Ϳ��ļ�
        if (NULL == s || 0 == s[0])
        {
            printf("filename input error!");
            return 0;
        }

        //��ʼ���ṹ��
        MD5_Init(&m_md5_ctx);

        if (NULL != m_fp)
        {
            fclose(m_fp);
            m_fp = NULL;
        }

        //���ļ�
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

    //input: s ����·�����ļ���
    //return: �ļ��Ĵ�С
    //note: ȡ�ļ���С
    int getFileSize(const char* s)
    {
        //�жϿ�ָ��Ϳ��ļ�
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
    //output: �Ѿ�������ֽ���
    //note: ��һ���ļ������Ѿ�������ֽ���
    int updateOnce()
    {
        int _len = fread(p_data, 1, MD5_BUFFER_LEN, m_fp);
        if (_len == 0)
        {
            return 0;    //��ʾ�ļ�����
        }
        MD5_Update(&m_md5_ctx, p_data, _len);
        m_cnt += _len;
        return m_cnt;
    }

    //input: N/A
    //output: N/A
    //note: ���������ļ�
    void updateAll()
    {
        int _len = 0;
        while (0 != (_len = fread(p_data, 1, MD5_BUFFER_LEN, m_fp)))
        {
            MD5_Update(&m_md5_ctx, p_data, _len);
        }
    }

    //�õ�����md5 ֵ
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

    //ȡ����md5ֵ
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