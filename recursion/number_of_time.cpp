#include<iostream>
using namespace std;
// Function to print a message
void f(int i,int n){
      if(i>n){
            return;
      }
      cout<<"ashok  ";
      f(i+1,n);
}
int main(){
      int n;
      cout << "Enter a number: ";
      cin >> n;
      f(1, n);
      return 0;
}