#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i,j;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(j=(i-1);j>=1;j--){
       cout<<j; 
    }
    cout<<endl;
   } 
} 
