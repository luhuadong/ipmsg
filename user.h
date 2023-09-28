/***********************************************
 * 文件名：user.h
 * 描述：用户的处理
 * 作者：Rudy Lo
 * 日期：2013年9月28日
 * 修改：
 ***********************************************/

#ifndef USERS_H
#define USERS_H

#include "command.h"

typedef struct user
{
  struct sockaddr_in peer;
  char   name[NAMELEN];
  char   host[NAMELEN];
  char   nickname[NAMELEN];
  int    inUse;
  int    exit;
  struct user *next;
} user;

extern user userList;

extern int insertUser(user *uList, user *target);
extern void destroyUsers(user *uList);
extern int listUsers(user **pusers, user *uList, int size, int flag);
extern int unListUsers(user **pusers, int num);
extern int delUser(user *uList, command *peercom);

#endif
