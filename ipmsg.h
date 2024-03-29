/***********************************************
 * 文件名：ipmsg.h
 * 描述：协议定义头文件
 * 作者：H.Shirouzu
 * 日期：2013年9月28日
 * 修改：Ver1.34
 ***********************************************/

#ifndef IPMSG_H
#define IPMSG_H

/*  IP Messenger Communication Protocol version 1.0 define  */
/*  macro  */
#define GET_MODE(command) (command & 0x000000ffUL)
#define GET_OPT(command)  (command & 0xffffff00UL)

/*  header  */
#define IPMSG_VERSION         0x0001
#define IPMSG_DEFAULT_PORT    0x0979

/*  command  */
#define IPMSG_NOOPERATION     0x00000000UL

#define IPMSG_BR_ENTRY        0x00000001UL
#define IPMSG_BR_EXIT         0x00000002UL
#define IPMSG_ANSENTRY        0x00000003UL
#define IPMSG_BR_ABSENCE      0x00000004UL

#define IPMSG_BR_ISGETLIST    0x00000010UL
#define IPMSG_OKGETLIST       0x00000011UL
#define IPMSG_GETLIST         0x00000012UL
#define IPMSG_ANSLIST         0x00000013UL
#define IPMSG_FILE_MTIME      0x00000014UL
#define IPMSG_FILE_CREATETIME 0x00000016UL
#define IPMSG_BR_ISGETLIST2   0x00000018UL

#define IPMSG_SENDMSG         0x00000020UL
#define IPMSG_RECVMSG         0x00000021UL
#define IPMSG_READMSG         0x00000030UL
#define IPMSG_DELMSG          0x00000031UL

#define IPMSG_GETFILEDATA     0x00000060UL
#define IPMSG_RELEASEFILES    0x00000061UL
#define IPMSG_GETDIRFILES     0x00000062UL

#define IPMSG_GETINFO         0x00000040UL
#define IPMSG_SENDINFO        0x00000041UL

#define IPMSG_GETABSENCEINFO  0x00000050UL
#define IPMSG_SENDABSENCEINFO 0x00000051UL

/*  option for all command  */
#define IPMSG_ABSENCEOPT      0x00000100UL
#define IPMSG_SERVEROPT       0x00000200UL
#define IPMSG_DIALUPOPT       0x00010000UL
#define IPMSG_FILEATTACHOPT   0x00200000UL

/*  option for send command  */
#define IPMSG_SENDCHECKOPT    0x00000100UL
#define IPMSG_SECRETOPT       0x00000200UL
#define IPMSG_BROADCASTOPT    0x00000400UL
#define IPMSG_MULTICASTOPT    0x00000800UL
#define IPMSG_NOPOPUPOPT      0x00001000UL
#define IPMSG_AUTORETOPT      0x00002000UL
#define IPMSG_RETRYOPT        0x00004000UL
#define IPMSG_PASSWORDOPT     0x00008000UL
#define IPMSG_NOLOGOPT        0x00020000UL
#define IPMSG_NEWMUTIOPT      0x00040000UL
#define IPMSG_NOADDLISTOPT    0x00080000UL

/* file types for fileattach command */
#define IPMSG_FILE_REGULAR    0x00000001UL
#define IPMSG_FILE_DIR        0x00000002UL
#define IPMSG_FILE_RETPARENT  0x00000003UL // return parent directory

#define HOSTLIST_DELIMIT      "\a"
#define HOSTLIST_DUMMY        "\b"

/*  end of IP Messenger Communication Protocol version 1.0 define  */
#define IPMSG_FILE_MTIME      0x00000014UL
#define IPMSG_FILE_CREATETIME 0x00000016UL

/*  IP Messenger for Windows  internal define  */
#define IPMSG_REVERSEICON     0x0100
#define IPMSG_TIMERINTERVAL   4000
#define IPMSG_CLOCKTICK       500
#define IPMSG_GETLIST_FINISH  0

#define IPMSG_BROADCAST_TIMER 0x0101
#define IPMSG_SEND_TIMER      0x0102
#define IPMSG_DELETE_TIMER    0x0103
#define IPMSG_LISTGET_TIMER   0x0104
#define IPMSG_LISTGETRETRY_TIMER 0x0105
#define IPMSG_ENTRY_TIMER     0x0106
#define IPMSG_DUMMY_TIMER     0x0107

#define IPMSG_RETRY_TIMES     4

#define IPMSG_NICKNAME        1
#define IPMSG_FULLNAME        2

#define IPMSG_NAMESORT        0x00000000
#define IPMSG_IPADDRSORT      0x00000001
#define IPMSG_HOSTSORT        0x00000002
#define IPMSG_NOGROUPSORTOPT  0x00000100
#define IPMSG_ICMPSORTOPT     0x00000200
#define IPMSG_NOKANJISORTOPT  0x00000400
#define IPMSG_ALLREVSORTOPT   0x00000800
#define IPMSG_GROUPREVSORTOPT 0x00001000
#define IPMSG_SUBREVSORTOPT   0x00002000

#if defined WIN32 || defined XWINDOW
#define MAX_SOCKBUF           32768
#else
#define MAX_SOCKBUF           8192
#endif
#define MAX_UDPBUF            8192
#define MAX_BUF               1024
#define MAX_NAMEBUF           50
#define MAX_LANGBUF           10
#define MAX_LISTBUF           (MAX_NAMEBUF * 3 + 50)

#define HS_TOOLS              "HSTools"
#define IP_MSG                "IPMsg"
#define NO_NAME               "null"
#define URL_STR               "://"
#define MAILTO_STR            "mailto:"

#endif /* IPMSG_H */
