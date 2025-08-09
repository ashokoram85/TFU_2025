#include<iostream>
#include<cmath>
using namespace std;
int main(){
      int x,y;
      cout << "Enter two numbers: ";
      cin >> x >> y; // Example input
      int gcd =1;
      for(int i=1; i<=min(x,y); i++){
            if(x%i==0 && y%i==0){
                  gcd = i;
            }
            
      }
      cout<<"The gcd of the number is: "<<gcd<<endl;
      return 0;
}