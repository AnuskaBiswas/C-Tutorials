#include<iostream>
using namespace std;
int main(){
    int dayno;
    cin>>dayno;
    switch(dayno){
     case 1:
         cout<<"monday"<<endl;
         break;
         case 2:
         cout<<"tueday"<<endl;
         break;
         case 3:
         cout<<"wednesday"<<endl;
         break;
         case 4:
         cout<<"thursday"<<endl;
          break;
     default:
        cout<<"default case"<<endl;
         }
         return 0;
}