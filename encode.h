/***********************************************
 * 文件名：encode.h
 * 描述：字符编码转换相关函数
 * 作者：Rudy Lo
 * 日期：2013年9月28日
 * 修改：
 ***********************************************/

#include <unistd.h>

extern int code_convert(char *to_charset, char *from_charset,
                 char *inbuf, size_t inlen, char *outbuf, size_t outlen);
extern int u2g(char *inbuf, size_t inlen, char *outbuf, size_t outlen);
extern int g2u(char *inbuf, size_t inlen, char *outbuf, size_t outlen);
