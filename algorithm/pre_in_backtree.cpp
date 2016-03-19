#include <iostream>
#include <string>
using namespace std;

void solve(string &pre, string &in)
{
    if (pre.size() <= 1)
    {
        if (pre.size() == 1)
            cout << pre[0];
        return;
    }
    int index = in.find(pre[0]);

    string left_Pre = pre.substr(1, index);

    string right_Pre = pre.substr(index+1, pre.size()-1-index);

    string left_In = in.substr(0, index);

    string right_In = in.substr(index+1, in.size()-1-index);

    solve(left_Pre, left_In);//左 

    solve(right_Pre, right_In);//右 

    cout << pre[0];//根 

    return;
}

int main()
{
    string pre, in, post;
    cout<<"input pre:"<<"\n";
    cin >> pre;
    cout<< "input in:"<<"\n";
    cin >> in;
    
      solve(pre, in);

        cout << endl;
   
}
