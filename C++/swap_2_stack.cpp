#include<iostream>
#include<stack>
using namespace std;
int main()
{
           int num;
           stack<int>s1({11,20,33,41});
           stack<int>s2({35,58,75,90});
           stack<int>s3;
           stack<int>s4;
           s3=s1;
           s4=s2;
           cout<<"Input : Stack 1 = {";
           while(!s3.empty())
           {
                     num=s3.top();
                     cout<<num<<",";
                     s3.pop();
           }
           cout<<"}\nStack 2 = {";
           while(!s4.empty())
           {
                     num=s4.top();
                     cout<<num<<",";
                     s4.pop();
           }
           cout<<"}";
           s1.swap(s2);
           cout<<"\nOutput : Stack 1 = {";
           while(!s1.empty())
           {
                     num=s1.top();
                     cout<<num<<",";
                     s1.pop();
           }
           cout<<"}\nStack 2 = {";
           while(!s2.empty())
           {
                     num=s2.top();
                     cout<<num<<",";
                     s2.pop();
           }
           cout<<"}";
           return 0;
}
