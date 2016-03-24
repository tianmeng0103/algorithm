/*#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int value;
struct node* next;
}list;

void reverse(list *head)
{
list *before;
list *current=head->next;

while(current !=NULL)
{
list *next=current->next;
current->next=before;
before=current;
current=next;
}
head->next=before;
}

// ͷ�巨
/*list* listcreate()
{   int i;
	list *head;
	head=(list *)malloc(sizeof(list));
	 head->next=NULL;

	while(scanf("%d", &i)!=EOF)
	{  list *temp;
	   temp=(list *)malloc(sizeof(list));
		temp->value=i;
		temp->next=head->next;
		 head->next=temp;

	}
  return head;

}
//β�巨
list *listcreate()
{
	 int i;
		list *head,*r;
		head=(list *)malloc(sizeof(list));
		 head->next=NULL;
          r=head;
		while(scanf("%d", &i)!=EOF)
		{  list *temp;
		   temp=(list *)malloc(sizeof(list));
			temp->value=i;
			r->next=temp;
			r=temp;

		}
		//r->next=NULL;
	  return head;
}
int main()
{
 list *head,*start;
 head=listcreate();
 reverse(head);
// list *before=head;

for(start=head->next;start!=NULL;start=start->next)
{
	 printf("%d ",	start->value);
}
 printf("\n");


return 0;
}*/
#include <stdio.h>
#include <stdlib.h>



int gcd(int x,int y)
{
return (!y)?x:gcd(y,x%y);
}





int result(int n,int k)
    {   int sum=k;
      if(n<0)
          return 0;
       if(n==0)
           return sum;
      int s[n];
      int i=0;


        for(int i= 0;i<n;++i)
           scanf("%d\n" , &s[i]);

     for(i=0;i<n;++i)
     {if(k>=s[i])
         sum+=s[i];
        else
        sum+=gcd(s[i],sum);

      }

     return  sum;
    }



int main()
{
	int n,c;
    while( scanf("%d %d",&n,&c)!=EOF)
    printf("%d\n",result(n,c));

	return 0;

}
