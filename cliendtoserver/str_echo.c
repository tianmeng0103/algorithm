#include "unp.h"

/*void str_echo(int sockfd)
{char buffer[MAXLINE];

size_t n;
again:
 while((n=read(sockfd,buffer,MAXLINE))>0)
   write(sockfd,buffer,n);
   
   if(n<0&&errno==EINTR)
   goto again;
   else if(n<0)
   err_sys("str_echo:read error");
   
   

}*/
/*size_t readline1(int fd1,void *vptr1,size_t maxlen)
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
*/



void str_echo(int sockfd)
{char buffer[MAXLINE];
int a,b,sum;
size_t n;
for(;;)
{
if((n=read(sockfd,buffer,MAXLINE))==0)
 return;
 if(sscanf(buffer,"%d%d",&a,&b)==2)
  snprintf(buffer,sizeof(buffer),"%d\n",a+b);
  //sum=a+b;
  else
   snprintf(buffer,sizeof(buffer),"input error\n");
n=strlen(buffer);
write(sockfd,&buffer,sizeof(buffer));
}
}
