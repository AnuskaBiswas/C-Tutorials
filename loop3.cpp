#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;
    int num=0;
    while(n>0)
    {
     num++;
     n=n/10;
    }
    cout<<num<<endl;
    return 0;
}