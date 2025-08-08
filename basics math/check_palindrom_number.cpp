#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number : ";
      cin>>n;
      int dup=n,revese_no= 0;
      while(n>0){
            int last_digit=n%10;
            revese_no = (revese_no*10) + last_digit;
            n/=10;
      }
      if(dup==revese_no){
            cout<<"This is the palindrom number:";
      }
      else{
            cout<<"not";
      }
      return 0;
}