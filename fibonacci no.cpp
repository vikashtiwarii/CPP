#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c;
    int n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}