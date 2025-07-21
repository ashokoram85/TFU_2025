#include<iostream>
#include<cmath>
using namespace std;
int main(){
      int a, b;
      cout << "Enter two numbers: ";
      cin >> a >> b; // Example input
      int gcd = 1; // Initialize GCD to 1
      for(int i = 1; i <= min(a, b); i++) {
          if(a % i == 0 && b % i == 0) {
              gcd = i; // Update GCD if a common divisor is found
          }
      }
      cout << "GCD of " << a << " and " << b << " is: " << gcd << endl; // Output the GCD 
}