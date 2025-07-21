//reverse of the degit
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int rev_no = 0;
      while(n>0){
            int last_degit=n%10;
            rev_no=(rev_no*10)+last_degit;
            n = n/10;
            
      }
      cout<<"count of the digit is : "<<rev_no;
}