#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T>
 void solve(vector<T> &v1,vector<T> &v2)
{  if(v1.size()<=1)
   {
     if(v1.size()==1)
       cout<<v1[0];
     return;
    
    }
  vector<T>::iterator ite = find(v2.begin(),v2.end(),v1[0]);
  size_type si=ite-v2.begin;
  vector<T> left_pre(v1.begin+1,v1.begin+ si );
  vector<T> right_pre(v1.begin+si+1,v1.size()-si-1);
  vector<T> left_in(v2.begin,ite);
  vector<T> right_in(ite+1,v2.size()-si-1);
 
  solve(left_pre,left_in);
  solve(right_pre,right_in);

  cout<<v1[0];
  return;

}
int main()
{  int i,j;
  vector<int> v1;
  vector<int> v2;
  while((cin>>i)!=NULL)
    {
      v1.push_back(i);
}
  while((cin>>j)!=NULL)
    {
      v2.push_back(j);
}
   solve(v1,v2);

   return 0;

 
}
