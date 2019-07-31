#include <QtCore>
#include <QtGui>
#include <QtSql>
#include <QtNetwork>
#include <QtXml>

#if (QT_VERSION > QT_VERSION_CHECK(5,0,0))
#include <QtWidgets>
#endif

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#define TIMEMS qPrintable (QTime::currentTime().toString("HH:mm:ss zzz"))
#define TIME qPrintable (QTime::currentTime().toString("HH:mm:ss"))
#define QDATE qPrintable (QDate::currentDate().toString("yyyy-MM-dd"))
#define QTIME qPrintable (QTime::currentTime().toString("HH-mm-ss"))
#define DATETIME qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"))
#define STRDATETIME qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd-HH-mm-ss"))
#define STRDATETIMEMS qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd-HH-mm-ss-zzz"))

#define AppName "NetTool"
#define AppPath qApp->applicationDirPath()
#define AppDeskWidth qApp->desktop()->availableGeometry().width()
#define AppDeskHeight qApp->desktop()->availableGeometry().height()


#ifndef MYHELPER_H
#define MYHELPER_H

class myHelper: public QObject
{
public:
    //设置为开机启动
    static void runWithSystem(bool autoRun, QString strName, QString strPath)
    {
        QSettings *reg = new QSettings("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", QSettings::NativeFormat);

        if (autoRun) {
            reg->setValue(strName, strPath);
        } else {
            reg->setValue(strName, "");
        }
    }

    static void setCode()
    {
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
#if _MSC_VER
        QTextCodec *codec = QTextCodec::codecForName("gbk");
#else
        QTextCodec *codec = QTextCodec::codecForName("utf-8");
#endif
        QTextCodec::setCodecForLocale(codec);
        QTextCodec::setCodecForCStrings(codec);
        QTextCodec::setCodecForTr(codec);
#endif
    }

    //设置指定样式
    static void setStyle(const QString &qssFile)
    {
        QFile file(qssFile);

        if (file.open(QFile::ReadOnly)) {
            QString qss = QLatin1String(file.readAll());
            qApp->setStyleSheet(qss);
            QString PaletteColor = qss.mid(20, 7);
            qApp->setPalette(QPalette(QColor(PaletteColor)));
            file.close();
        }
    }

    //延时
    static void sleep(int sec)
    {
        QTime dieTime = QTime::currentTime().addMSecs(sec);

        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
    }

    //窗体居中显示
    static void formInCenter(QWidget *frm)
    {
        int frmX = frm->width();
        int frmY = frm->height();
        QDesktopWidget w;
        int deskWidth = w.availableGeometry().width();
        int deskHeight = w.availableGeometry().height();
        QPoint movePoint(deskWidth / 2 - frmX / 2, deskHeight / 2 - frmY / 2);
        frm->move(movePoint);
    }

    //设置系统日期时间
    static void setSystemDateTime(QString year, QString month, QString day, QString hour, QString min, QString sec)
    {
#ifdef Q_OS_WIN
        QProcess p(0);
        p.start("cmd");
        p.waitForStarted();
        p.write(QString("date %1-%2-%3\n").arg(year).arg(month).arg(day).toLatin1());
        p.closeWriteChannel();
        p.waitForFinished(1000);
        p.close();
        p.start("cmd");
        p.waitForStarted();
        p.write(QString("time %1:%2:%3.00\n").arg(hour).arg(min).arg(sec).toLatin1());
        p.closeWriteChannel();
        p.waitForFinished(1000);
        p.close();
#else
        QString cmd = QString("date %1%2%3%4%5.%6").arg(month).arg(day).arg(hour).arg(min).arg(year).arg(sec);
        system(cmd.toLatin1());
        system("hwclock -w");
#endif
    }

    static QString byteArrayToHexStr(QByteArray data)
    {
        QString temp = "";
        QString hex = data.toHex();

        for (int i = 0; i < hex.length(); i = i + 2) {
            temp += hex.mid(i, 2) + " ";
        }

        return temp.trimmed().toUpper();
    }

    static QString byteArrayToAsciiStr(QByteArray data)
    {
        QString temp;
        int len = data.size();

        for (int i = 0; i < len; i++) {
            //0x20为空格,空格以下都是不可见字符
            char b = data.at(i);

            if (0x00 == b) {
                temp += QString("\\NUL");
            } else if (0x01 == b) {
                temp += QString("\\SOH");
            } else if (0x02 == b) {
                temp += QString("\\STX");
            } else if (0x03 == b) {
                temp += QString("\\ETX");
            } else if (0x04 == b) {
                temp += QString("\\EOT");
            } else if (0x05 == b) {
                temp += QString("\\ENQ");
            } else if (0x06 == b) {
                temp += QString("\\ACK");
            } else if (0x07 == b) {
                temp += QString("\\BEL");
            } else if (0x08 == b) {
                temp += QString("\\BS");
            } else if (0x09 == b) {
                temp += QString("\\HT");
            } else if (0x0A == b) {
                temp += QString("\\LF");
            } else if (0x0B == b) {
                temp += QString("\\VT");
            } else if (0x0C == b) {
                temp += QString("\\FF");
            } else if (0x0D == b) {
                temp += QString("\\CR");
            } else if (0x0E == b) {
                temp += QString("\\SO");
            } else if (0x0F == b) {
                temp += QString("\\SI");
            } else if (0x10 == b) {
                temp += QString("\\DLE");
            } else if (0x11 == b) {
                temp += QString("\\DC1");
            } else if (0x12 == b) {
                temp += QString("\\DC2");
            } else if (0x13 == b) {
                temp += QString("\\DC3");
            } else if (0x14 == b) {
                temp += QString("\\DC4");
            } else if (0x15 == b) {
                temp += QString("\\NAK");
            } else if (0x16 == b) {
                temp += QString("\\SYN");
            } else if (0x17 == b) {
                temp += QString("\\ETB");
            } else if (0x18 == b) {
                temp += QString("\\CAN");
            } else if (0x19 == b) {
                temp += QString("\\EM");
            } else if (0x1A == b) {
                temp += QString("\\SUB");
            } else if (0x1B == b) {
                temp += QString("\\ESC");
            } else if (0x1C == b) {
                temp += QString("\\FS");
            } else if (0x1D == b) {
                temp += QString("\\GS");
            } else if (0x1E == b) {
                temp += QString("\\RS");
            } else if (0x1F == b) {
                temp += QString("\\US");
            } else if (0x7F == b) {
                temp += QString("\\x7F");
            } else if (0x5C == b) {
                temp += QString("\\x5C");
            } else if (0x20 >= b) {
                temp += QString("\\x%1").arg(decimalToStrHex((quint8)b));
            } else {
                temp += QString("%1").arg(b);
            }
        }

        return temp.trimmed();
    }

    static QByteArray hexStrToByteArray(QString str)
    {
        QByteArray senddata;
        int hexdata, lowhexdata;
        int hexdatalen = 0;
        int len = str.length();
        senddata.resize(len / 2);
        char lstr, hstr;

        for (int i = 0; i < len;) {
            hstr = str.at(i).toLatin1();

            if (hstr == ' ') {
                i++;
                continue;
            }

            i++;

            if (i >= len) {
                break;
            }

            lstr = str.at(i).toLatin1();
            hexdata = convertHexChar(hstr);
            lowhexdata = convertHexChar(lstr);

            if ((hexdata == 16) || (lowhexdata == 16)) {
                break;
            } else {
                hexdata = hexdata * 16 + lowhexdata;
            }

            i++;
            senddata[hexdatalen] = (char)hexdata;
            hexdatalen++;
        }

        senddata.resize(hexdatalen);
        return senddata;
    }

    static QByteArray asciiStrToByteArray(QString str)
    {
        QByteArray buffer;
        int len = str.length();
        QString letter;
        QString hex;

        for (int i = 0; i < len; i++) {
            letter = str.at(i);

            if (letter == "\\") {
                i++;
                letter = str.mid(i, 1);

                if (letter == "x") {
                    i++;
                    hex = str.mid(i, 2);
                    buffer.append(strHexToDecimal(hex));
                    i++;
                    continue;
                } else if (letter == "N") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "U") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "L") {           //NUL=0x00
                            buffer.append((char)0x00);
                            continue;
                        }
                    } else if (hex == "A") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "K") {           //NAK=0x15
                            buffer.append(0x15);
                            continue;
                        }
                    }
                } else if (letter == "S") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "O") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "H") {           //SOH=0x01
                            buffer.append(0x01);
                            continue;
                        } else {                    //SO=0x0E
                            buffer.append(0x0E);
                            i--;
                            continue;
                        }
                    } else if (hex == "T") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "X") {           //STX=0x02
                            buffer.append(0x02);
                            continue;
                        }
                    } else if (hex == "I") {        //SI=0x0F
                        buffer.append(0x0F);
                        continue;
                    } else if (hex == "Y") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "N") {           //SYN=0x16
                            buffer.append(0x16);
                            continue;
                        }
                    } else if (hex == "U") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "B") {           //SUB=0x1A
                            buffer.append(0x1A);
                            continue;
                        }
                    }
                } else if (letter == "E") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "T") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "X") {           //ETX=0x03
                            buffer.append(0x03);
                            continue;
                        } else if (hex == "B") {    //ETB=0x17
                            buffer.append(0x17);
                            continue;
                        }
                    } else if (hex == "O") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "T") {           //EOT=0x04
                            buffer.append(0x04);
                            continue;
                        }
                    } else if (hex == "N") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "Q") {           //ENQ=0x05
                            buffer.append(0x05);
                            continue;
                        }
                    } else if (hex == "M") {        //EM=0x19
                        buffer.append(0x19);
                        continue;
                    } else if (hex == "S") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "C") {           //ESC=0x1B
                            buffer.append(0x1B);
                            continue;
                        }
                    }
                } else if (letter == "A") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "C") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "K") {           //ACK=0x06
                            buffer.append(0x06);
                            continue;
                        }
                    }
                } else if (letter == "B") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "E") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "L") {           //BEL=0x07
                            buffer.append(0x07);
                            continue;
                        }
                    } else if (hex == "S") {        //BS=0x08
                        buffer.append(0x08);
                        continue;
                    }
                } else if (letter == "C") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "R") {               //CR=0x0D
                        buffer.append(0x0D);
                        continue;
                    } else if (hex == "A") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "N") {           //CAN=0x18
                            buffer.append(0x18);
                            continue;
                        }
                    }
                } else if (letter == "D") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "L") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "E") {           //DLE=0x10
                            buffer.append(0x10);
                            continue;
                        }
                    } else if (hex == "C") {
                        i++;
                        hex = str.mid(i, 1);

                        if (hex == "1") {           //DC1=0x11
                            buffer.append(0x11);
                            continue;
                        } else if (hex == "2") {    //DC2=0x12
                            buffer.append(0x12);
                            continue;
                        } else if (hex == "3") {    //DC3=0x13
                            buffer.append(0x13);
                            continue;
                        } else if (hex == "4") {    //DC2=0x14
                            buffer.append(0x14);
                            continue;
                        }
                    }
                } else if (letter == "F") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "F") {               //FF=0x0C
                        buffer.append(0x0C);
                        continue;
                    } else if (hex == "S") {        //FS=0x1C
                        buffer.append(0x1C);
                        continue;
                    }
                } else if (letter == "H") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "T") {               //HT=0x09
                        buffer.append(0x09);
                        continue;
                    }
                } else if (letter == "L") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "F") {               //LF=0x0A
                        buffer.append(0x0A);
                        continue;
                    }
                } else if (letter == "G") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "S") {               //GS=0x1D
                        buffer.append(0x1D);
                        continue;
                    }
                } else if (letter == "R") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "S") {               //RS=0x1E
                        buffer.append(0x1E);
                        continue;
                    }
                } else if (letter == "U") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "S") {               //US=0x1F
                        buffer.append(0x1F);
                        continue;
                    }
                } else if (letter == "V") {
                    i++;
                    hex = str.mid(i, 1);

                    if (hex == "T") {               //VT=0x0B
                        buffer.append(0x0B);
                        continue;
                    }
                } else if (letter == "\\") {
                    //如果连着的是多个\\则对应添加\对应的16进制0x5C
                    buffer.append(0x5C);
                    continue;
                } else {
                    //将对应的\[前面的\\也要加入
                    buffer.append(0x5C);
                    buffer.append(letter.toLatin1());
                    continue;
                }
            }

            buffer.append(str.mid(i, 1).toLatin1());

        }

        return buffer;
    }

    static char convertHexChar(char ch)
    {
        if ((ch >= '0') && (ch <= '9')) {
            return ch - 0x30;
        } else if ((ch >= 'A') && (ch <= 'F')) {
            return ch - 'A' + 10;
        } else if ((ch >= 'a') && (ch <= 'f')) {
            return ch - 'a' + 10;
        } else {
            return (-1);
        }
    }

    static QString decimalToStrHex(int decimal)
    {
        QString temp = QString::number(decimal, 16);

        if (temp.length() == 1) {
            temp = "0" + temp;
        }

        return temp.toUpper();
    }

    static int strHexToDecimal(QString strHex)
    {
        bool ok;
        return strHex.toInt(&ok, 16);
    }




    /********************************************小端/低尾端(尾部 放到 低地址)*************************************************/
    /*
             * 将int数值转换为占4个字节的byte数组，本方法适用于(低位在前，高位在后)的顺序。 和bytesToInt（）配套使用
             * @param value
             *            要转换的int值
             * @return byte数组
             */
    static QByteArray little_intToBytes( int value )
    {
        QByteArray src;
        src.resize(4);
        src[3] =  (char) ((value>>24) & 0xFF);
        src[2] =  (char) ((value>>16) & 0xFF);
        src[1] =  (char) ((value>>8) & 0xFF);
        src[0] =  (char) (value & 0xFF);
        return src;
    }
    /*
            * 将short数值转换为占2个字节的byte数组，本方法适用于(低位在前，高位在后)的顺序。 和bytesToInt（）配套使用
            * @param value
            *            要转换的int值
            * @return byte数组
            */
    static QByteArray little_shortToBytes( short value )
    {
        QByteArray src;
        src.resize(2);
        src[1] =  (char) ((value>>8) & 0xFF);
        src[0] =  (char) (value & 0xFF);
        return src;
    }

    /*
           * 将long,double数值转换为占8个字节的byte数组，本方法适用于(低位在前，高位在后)的顺序。 和bytesToInt（）配套使用
           * @param value
           *            要转换的int值
           * @return byte数组
           */
    static QByteArray little_longToBytes( long value )
    {
        QByteArray src;
        src.resize(8);
        src[7] =  (char) ((value>>56) & 0xFF);
        src[6] =  (char) ((value>>48) & 0xFF);
        src[5] =  (char) ((value>>40) & 0xFF);
        src[4] =  (char) ((value>>32) & 0xFF);
        src[3] =  (char) ((value>>24) & 0xFF);
        src[2] =  (char) ((value>>16) & 0xFF);
        src[1] =  (char) ((value>>8) & 0xFF);
        src[0] =  (char) (value & 0xFF);
        return src;
    }


    /*
              * byte数组转int数值，本方法适用于(低位在前，高位在后)的顺序。
              *
              * @param ary
              *            byte数组
              * @param offset
              *            从数组的第offset位开始
              * @return int数值
              */
    static short little_bytesToInt(const QByteArray& ary, int offset)
    {
        int value;
        value = (int) ((ary.at(0)&0xFF)
                       | ((ary.at(1)<<8) & 0xFF00)
                       | ((ary.at(2)<<16)& 0xFF0000)
                       | ((ary.at(3)<<24) & 0xFF000000));
        return value;
    }

    /*
                 * byte数组转short数值，本方法适用于(低位在前，高位在后)的顺序。
                 *
                 * @param ary
                 *            byte数组
                 * @param offset
                 *            从数组的第offset位开始
                 * @return short数值
                 */
    static short little_bytesToShort(const QByteArray& ary, int offset)
    {
        short value;
        value = (short) ((ary.at(0)&0xFF)
                         | ((ary.at(1)<<8) & 0xFF00));
        return value;
    }


    /*
                    * byte数组转int数值，本方法适用于(低位在前，高位在后)的顺序。
                    *
                    * @param ary
                    *            byte数组
                    * @param offset
                    *            从数组的第offset位开始
                    * @return long数值
                    */
    static long little_bytesToLong(const QByteArray& ary, int offset)
    {
        long value;

        value = (long) ((ary.at(0)&0xFF)
                        | ((ary.at(1)<<8) & 0xFF00)
                        | ((ary.at(2)<<16)& 0xFF0000)
                        | ((ary.at(3)<<24) & 0xFF000000)
                        | ((ary.at(4)<<32) & 0xFF00000000)
                        | ((ary.at(5)<<40) & 0xFF0000000000)
                        | ((ary.at(6)<<48) & 0xFF000000000000)
                        | ((ary.at(7)<<56) & 0xFF00000000000000));
        return value;
    }


    /********************************************大端/高尾端(尾部 放到 高地址)*************************************************/
                   /*
                   * 将int数值转换为占4个字节的byte数组，本方法适用于(低位在后，高位在前)的顺序。 和bytesToInt（）配套使用
                   * @param value
                   * 要转换的int值
                   * @return byte数组
                   */
                   static QByteArray big_intToBytes( int value )
                   {
                       QByteArray src;
                       src.resize(4);
                       src[0] =  (char) ((value>>24) & 0xFF);
                       src[1] =  (char) ((value>>16) & 0xFF);
                       src[2] =  (char) ((value>>8) & 0xFF);
                       src[3] =  (char) (value & 0xFF);
                       return src;
                   }
                   /*
                    * 将short数值转换为占2个字节的byte数组，本方法适用于(低位在后，高位在前)的顺序。 和bytesToInt（）配套使用
                    * @param value
                    *            要转换的int值
                    * @return byte数组
                    */
                   static QByteArray big_shortToBytes( short value )
                   {
                       QByteArray src;
                       src.resize(2);
                       src[0] =  (char) ((value>>8) & 0xFF);
                       src[1] =  (char) (value & 0xFF);
                       return src;
                   }

                   /*
                   * 将long,double数值转换为占8个字节的byte数组，本方法适用于(低位在后，高位在前)的顺序。 和bytesToInt（）配套使用
                   * @param value
                   *            要转换的int值
                   * @return byte数组
                   */
                   static QByteArray big_longToBytes( long value )
                   {
                       QByteArray src;
                       src.resize(8);
                       src[0] =  (char) ((value>>56) & 0xFF);
                       src[1] =  (char) ((value>>48) & 0xFF);
                       src[2] =  (char) ((value>>40) & 0xFF);
                       src[3] =  (char) ((value>>32) & 0xFF);
                       src[4] =  (char) ((value>>24) & 0xFF);
                       src[5] =  (char) ((value>>16) & 0xFF);
                       src[6] =  (char) ((value>>8) & 0xFF);
                       src[7] =  (char) (value & 0xFF);
                       return src;
                   }


                   /*
                    * byte数组转int数值，本方法适用于(低位在后，高位在前)的顺序。
                    *
                    * @param ary
                    *            byte数组
                    * @param offset
                    *            从数组的第offset位开始
                    * @return int数值
                    */
                   static short big_bytesToInt(const QByteArray& ary, int offset)
                   {
                       int value;
                       value = (int) ((ary.at(3)&0xFF)
                                      | ((ary.at(2)<<8) & 0xFF00)
                                      | ((ary.at(1)<<16)& 0xFF0000)
                                      | ((ary.at(0)<<24) & 0xFF000000));
                       return value;
                   }

                   /*
                    * byte数组转short数值，本方法适用于(低位在后，高位在前)的顺序。
                    *
                    * @param ary
                    *            byte数组
                    * @param offset
                    *            从数组的第offset位开始
                    * @return short数值
                    */
                   static short big_bytesToShort(const QByteArray& ary, int offset)
                   {
                       short value;
                       value = (short) ((ary.at(1)&0xFF)
                                        | ((ary.at(0)<<8) & 0xFF00));
                       return value;
                   }


                   /*
                    * byte数组转int数值，本方法适用于(低位在后，高位在前)的顺序。
                    *
                    * @param ary
                    *            byte数组
                    * @param offset
                    *            从数组的第offset位开始
                    * @return long数值
                    */
                   static long big_bytesToLong(const QByteArray& ary, int offset)
                   {
                       long value;

                       value = (long) ((ary.at(7)&0xFF)
                                       | ((ary.at(6)<<8) & 0xFF00)
                                       | ((ary.at(5)<<16)& 0xFF0000)
                                       | ((ary.at(4)<<24) & 0xFF000000)
                                       | ((ary.at(3)<<32) & 0xFF00000000)
                                       | ((ary.at(2)<<40) & 0xFF0000000000)
                                       | ((ary.at(1)<<48) & 0xFF000000000000)
                                       | ((ary.at(0)<<56) & 0xFF00000000000000));
                       return value;
                   }



};

#endif // MYHELPER_H
