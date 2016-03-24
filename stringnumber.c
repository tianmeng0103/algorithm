//每行的字符串个数
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//using namespace std;
int Count(const char *str)
{int n=0;
int i=0;
int num=0;
   int len=strlen(str);
   while(str[len-1]==' ')
   {   num++;
	   len--;
   }
   int k=strlen(str);
 while(i<=k-num-1)
 {
	if(str[i]==' ')
		n++;
	 i++;
 }
return n+1;
}
int main()
{   char str[1000];
     while(gets(str))
     {
    	if(str[0]=='#')
    		break;
    	// cout<<Count(str)<<endl;
    	// cout<<"\n";
       printf("%d\n",Count(str));



     }


return 0;
}
