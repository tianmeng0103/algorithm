#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int value;
struct node* next;
}list;

list *listcreate(int *a)
{
	    int i=0;
		list *head,*r;
		head=(list *)malloc(sizeof(list));
		 head->next=NULL;
          r=head;
		while(a[i]!='\0')
		{  list *temp;
		   temp=(list *)malloc(sizeof(list));
			temp->value=a[i];
			r->next=temp;
			r=temp;
            i++;
		}
		r->next=NULL;
	  return head;
}
list* merge(list *phead1,list *phead2)
{
if(phead1->next==NULL)return phead2;
if(phead2->next==NULL)return phead1;
list *pmergehead=NULL;
if(phead1->next->value<phead2->next->value)
{
pmergehead=phead1;
pmergehead->next=merge(phead1->next,phead2);
}
else
{
pmergehead=phead2;
pmergehead->next=merge(phead1,phead2->next);
}
return pmergehead;

}

int main()
{
	int a[]={3,5,7,9};
	int b[]={2,5,6,8};
    list *pmerge,*start;
	 pmerge=merge(listcreate(a),listcreate(b));
	 for(start=pmerge->next;start!=NULL;start=start->next)
	 {
	 	 printf("%d ",	start->value);
	 }
	  printf("\n");

return 0;
}
