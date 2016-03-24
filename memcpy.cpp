/*#include <iostream>
#include <string.h>

using namespace std;


char * memcpy1( char *dst, const char *src,size_t len)
{
	if(dst==NULL&&src==NULL)
		return NULL;
     char *ret=dst;
     if(dst<=src||(char *)dst >= (char *)src + len)
     {
    	 while(len--){
    	    *(char *)dst = *(char *)src;
    	    dst = (char *)dst + 1;
    	    src = (char *)src + 1;
    	   }

     }
     else
    	 {
    	 //有内存重叠，从高地址开始复制
    	  src = (char *)src + len - 1;
    	  dst = (char *)dst + len - 1;
    	 while(len--){
    	    	    *(char *)dst = *(char *)src;
    	    	    dst = (char *)dst - 1;
    	    	    src = (char *)src - 1;
    	    	   }

    	 }

return ret;
}
int main()
{
	char str1[]="hello world";

	char str2[]="";

	cout<<memcpy1(str2,str1,strlen(str1)+1)<<endl;

return 0;
}*/
/*#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

};
void toSequence(TreeNode* root, string &ret) {
      if(root==NULL) return;
      ret.push_back('(');
      toSequence(root->left, ret);
      toSequence(root->right, ret);
      ret.push_back(')');
  }

  string Sequence(TreeNode* root) {
        // write code here
          string ret;
        toSequence(root, ret);
        return ret;
    }


   TreeNode* createTree(int *dst)
   {
	   TreeNode* root;
	   root=(TreeNode*)malloc(sizeof(TreeNode));
       root->left=NULL;
      root->right=NULL;
      TreeNode* r;
      r=root;




   }*/
// 猴子每天吃一半加1个
#include <iostream>
using namespace std;

int eatPeach(const int &n)
{  int num=1;
	for(int i=1;i<n;++i)
	   num=(num+1)*2;


	return  num;

}
int main()
{int n;
while(cin>>n)
{

cout<<eatPeach(n)<<endl;
cout<<"\n";

}

}




















