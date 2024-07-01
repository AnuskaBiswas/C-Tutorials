#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cin>>n;
    int result=0;
    for(i=0;i<=n;i++)
    {
      if(i%2==0)
      {
        result=result-i;
      }
      else{
        result=result+i;
      }

    }
          cout<<result;
    cout<<endl;
    return 0;
}