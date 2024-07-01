#include<iostream>
//divisible by both 5 and 7
using namespace std;
int main()
{
    
    int i;
    
 for(i=5;;i+=5)
 {
    if(i%7==0)
    {
        cout<<i<<endl;
        break;
    }
 }
return 0;
}