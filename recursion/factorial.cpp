#include<iostream>
using namespace std;
// Function to print a message
int f(int n){
      if(n==1) return 1;
      return n*f(n-1); // Recursive call with n decremented by 1  

}
int main(){
      int n;
      cout << "Enter a number: ";
      cin >> n;
      cout<<f(n);
      return 0;
}