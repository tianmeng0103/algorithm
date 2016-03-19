#include <string>
#include <iostream>
#include <vector>
using namespace std;

string findLongestPalindrome(string &s);  
int main(void)
{
    
    string s;
   int number;
   
   cin>>number;
   vector<string> v(number);
   for(int i=0;i<number;++i)
   {
        cin>>s;
        v[i]=s;
       
   }
   for(int i=0;i<number;++i)
   {   
       string temp=findLongestPalindrome(v[i]);
       if(temp=="")
       cout<<0<<endl;
       else
       cout<<temp.size()<<endl;
       
   }
   
   return 0;
   
   
}
string findLongestPalindrome(string &s)  
{  
    const int length=s.size();  
    int maxlength=0;  
    int start;  
  
    for(int i=0;i<length;i++)//长度为奇数  
    {  
        int j=i-1,k=i+1;  
        while(j>=0&&k<length&&s.at(j)==s.at(k))  
        {  
            if(k-j+1>maxlength)  
            {  
                maxlength=k-j+1;  
                start=j;  
            }  
            j--;  
            k++;  
        }  
    }  
  
    for(int i=0;i<length;i++)//长度为偶数  
    {  
        int j=i,k=i+1;  
        while(j>=0&&k<length&&s.at(j)==s.at(k))  
        {  
            if(k-j+1>maxlength)  
            {  
                maxlength=k-j+1;  
                start=j;  
            }  
            j--;  
            k++;  
        }  
    }  
    if(maxlength>0)  
        return s.substr(start,maxlength);  
    return "";  
}
