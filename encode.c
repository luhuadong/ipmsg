/***********************************************
 * 文件名：encode.c
 * 描述：字符编码转换相关函数
 * 作者：Rudy Lo
 * 日期：2013年9月28日
 * 修改：
 ***********************************************/

#include <iconv.h>
#include <string.h>

// 编码转换
int code_convert(char *to_charset, char *from_charset,
                 char *inbuf, size_t inlen, char *outbuf, size_t outlen)
{
  
  iconv_t cd;
  int flag;
  char **pin = &inbuf;
  char **pout = &outbuf;

  flag = 0;

  if ((cd=iconv_open(to_charset, from_charset))==(iconv_t) -1)
    flag = -1;
  
  bzero(outbuf,outlen);
  
  if (iconv(cd, pin, &inlen, pout, &outlen)==(size_t) -1)
    flag = -1;
  
  iconv_close(cd);
  return flag;
}

// GB2312码转为UNICODE码
int g2u(char *inbuf, size_t inlen, char *outbuf, size_t outlen)
{
  return code_convert("utf-8", "gb2312", inbuf, inlen, outbuf, outlen);
}

// UNICODE码转为GB2312码
int u2g(char *inbuf, size_t inlen, char *outbuf, size_t outlen)
{
  return code_convert("gb2312", "utf-8", inbuf, inlen, outbuf, outlen);
}
