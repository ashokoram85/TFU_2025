//palindrom  of the number
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int rev_no = 0;
      int duplicate_number=n;
      while(n>0){
            int last_degit=n%10;
            rev_no=(rev_no*10)+last_degit;
            n = n/10;
            
      }
      if(rev_no==duplicate_number){
            cout<<"palindrom";
      }
      else{
            cout<<"NOT";
      }
}