//count of the degit
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int cnt = 0;
      while(n>0){
            n = n/10;
            cnt= cnt+1;
      }
      cout<<"count of the digit is : "<<cnt;
}