#include<iostream>
using namespace std;
// Function to print a message
void f(int i,int n){
      if(i<1){
            return;
      }
      cout<<i<<"  ";
      f(i-1,n);
}
int main(){
      int n;
      cout << "Enter a number: ";
      cin >> n;
      f(n, n);
      return 0;
}