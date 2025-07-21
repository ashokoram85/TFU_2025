#include<iostream>
#include<cmath>
using namespace std;
int main(){
      int a, b;
      cin>> a >> b; // Example input
      while(a>0 && b>0){
              if(a > b) {
                    a = a % b; // Reduce a
              } else {
                    b = b % a; // Reduce b
              }
              if(a==0){
                  cout<<"GCD is:"<<b<<endl; // Output GCD when a becomes 0
                  break;
              }
              else if(b==0){
                  cout<<"GCD is:"<<a<<endl; // Output GCD when b becomes 0
                  break;      
              }
      }
}