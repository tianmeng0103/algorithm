#include "unp.h"
void str_cli(FILE *fp, int sockfd);
//size_t writen(int fd,const void *vptr,size_t n);
//size_t readline(int fd,void *vptr,size_t maxlen);
int main(int argc,int **argv)
{
//int sockfd,n;
int i,sockfd[5];
struct sockaddr_in servaddr;
if(argc!=2)
//err_quit("usage: tcpip address");
for(i=0;i<5;++i)
{
sockfd[i]=socket(AF_INET,SOCK_STREAM,0);

bzero(&servaddr,sizeof(servaddr));

servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(SERV_PORT);

inet_pton(AF_INET,argv[1],&servaddr.sin_addr);


connect(sockfd[i],(SA *)&servaddr,sizeof(servaddr));
}
str_cli(stdin,sockfd[0]);
exit(0);
}


/*size_t writen(int fd,const void *vptr,size_n n)
{

size_t nleft;
size_t nwriten;
const char *ptr;
ptr=vptr;
nleft=n;
while(nleft>0)
{
if((nwriten=write(fd,ptr,nleft))<=0)
{
if(nwriten<0 && errno=EINTR)
nwriten=0;
else return (-1);
}
nleft-=nwriten;
ptr+=nwriten;
}
return (n);
}
*/

