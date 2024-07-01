#include<iostream>
using namespace std;
int main()
{
    int a,c=1;
    cin>>a;
    int pow;
    cin>>pow;
    int i;
    for(i=1;i<=pow;i++)
    {
     c=c*a;
    }
    cout<<c;
    return 0;
}