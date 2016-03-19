#include "unp.h"
size_t readline1(int fd1,void *vptr1,size_t maxlen);
void str_cli(FILE *fp, int sockfd)
{
char sendline[MAXLINE],recvline[MAXLINE];
while(fgets(sendline,MAXLINE,fp)!=NULL)
{
write(sockfd,sendline,strlen(sendline));

if(readline1(sockfd,recvline,MAXLINE)==0)
printf("str_cli:server terminate error");
fputs(recvline,stdout);
}



}
size_t readline1(int fd1,void *vptr1,size_t maxlen)
{
size_t n1,rc;
char c,*ptr1;
ptr1=vptr1;
for(n1=1;n1<maxlen;n1++)
{
again:
if((rc=read(fd1,&c,1))==1)
{
*ptr1++=c;
if(c=='\n')
break;

}else if(rc==0)
{*ptr1=0;
return (n1-1);
}else{
  if(errno==EINTR)
  goto again;
  return (-1);
}

}
*ptr1=0;
return (n1);
}
