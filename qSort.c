/*#include <stdio.h>
#include <stdlib.h>



int RandomInRange(int min, int max)
{
    int random = rand() % (max - min + 1) + min;// min ~ max
    return random;
}
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}

int partion(int *data,int length,int start ,int end)
{
if(data==NULL ||length<=0||start<0||end>=length)
   return 0;

int index=RandomInRange(start ,end);
   swap(data[index],data[end]);

int small=start-1;

for(index=start;index<end;++index)
{
if(data[index]<data[end])
{
 ++small;
 if(small!=index)
  swap(data[index],data[small]);
}
}

 ++small;
 swap(data[small],data[end]);
 return small;
}

void qsort1(int *data,int length ,int start ,int end)
{

if(start==end)
 return ;
int index=partion(data,length,start  ,end);

if(index>start)
	qsort1(data,length,start,index-1);
if(index<end)
	qsort1(data,length,index+1,end);


}

int main()
{

int i;
int data[]={23,4,2,1,-8,4,23,6,78};
int length=sizeof(data)/sizeof(int);

qsort1(data,length,0,length-1);

for(i=0;i<length;++i)
	printf("%d ",data[i]);
   printf("\n");


   return 0;
}

*/


