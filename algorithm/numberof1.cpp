#include <iostream>


using namespace std;

int Numberof1(int n)
{
 int number=0;
 while(n)
 {
 if(n%10==1)
 number++;
 
 n=n/10;
 }
 
 return number;
}

int numofN(int n)

{
int number=0;
for(int i=0;i<=n;++i)
number+=Numberof1(i);

return number;

}

int main()
{int n,m;
cin>>n;
 m=numofN(n);
 cout<<m<<endl;
 cout<<"\n";

}

