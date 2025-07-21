//armstrong number
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int sum =0;
      int dup = n;
      while(n>0){
            int last_degit=n%10;
            sum=sum+(last_degit*last_degit*last_degit);
            n = n/10;
            
      }
      if(sum==dup){
            cout<<"Armstrong number";
      }
      else{
            cout<<"NOT";
      }
}