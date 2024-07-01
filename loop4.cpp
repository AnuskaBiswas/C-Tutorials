#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;
    int ld;
     int sum=0 ;
    while(n>=0)
    {
    ld=ld%10;
    sum=sum+ld;
    n=n/10;
  
    }
    cout<<sum<<endl;
    return 0;
}