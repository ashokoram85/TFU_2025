#include<iostream>
using namespace std;
// Function to print a message
void f(int n){
      int i = 1; // Start from 1
      if(i >n){
      return;
      }
      cout<<i<<endl;
      f(i+1);
}
int main(){
      int n;
      cout << "Enter a number: ";
      cin >> n;
      f(n);
      return 0;
}