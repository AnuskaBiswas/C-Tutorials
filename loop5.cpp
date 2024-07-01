#include<iostream>
using namespace std;
int main()
{
    int n,ld;
    cin>>n;
    int rev=0;
    while(n>0)
    {
       ld= n%10;
       rev=rev*10+ld;
       n=n/10;
  
    }
          cout<<rev;
    cout<<endl;
   
 return 0;
}
