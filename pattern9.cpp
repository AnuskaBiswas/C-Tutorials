#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int i,j;
   for(i=1;i<=n1;i++)
   {
    for(j=1;j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
   }
   return 0;
}