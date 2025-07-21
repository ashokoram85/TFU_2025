#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
      int prime(int n){
           int cnt =0;
            for(int i=1; i<=sqrt(n); i++){
                  if(n%i==0){
                        cnt++;
                        if((n/i) != i) {
                              cnt++; // Count both divisors if they are different
                        }
                  }
            }
            if(cnt == 2) {
                  cout<<"Prime"; // Output if the number is prime
            } else {
                  cout<<"Not Prime"; // Output if the number is not prime
            }
      }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      sol.prime(number); // Call the prime function
      return 0;
}