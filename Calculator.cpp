#include<bits/stdc++.h>
using namespace std;
int main()
{        cout<<"It's a simple calculator where you can add , subtract , multiply and devide the two numbers"<<endl;
    double a,b;
    cout<<"-----Enter First number Here-----"<<endl;
    cin>>a;
     cout<<"-----Enter Second Number Here-----"<<endl;
     cin>>b;
    cout<<"..........Enter the operation which you want to perform..........."<<endl;
    char c;
    cin>>c;
    cout<<"---Here is your output---"<<endl;
    if(c=='+')
    cout<<a+b;
    else if(c=='-')
    cout<<a-b;
    else if(c=='*')
    cout<<a*b;
    else if(c=='/')
    cout<<a/b;
    else
    cout<<"Please enter valid operator";

}