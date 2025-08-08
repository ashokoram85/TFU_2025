#include<iostream>
using namespace std;
class Solution {
public:
int cntdigit(int n){
      int cnt =0;
      for(int i=0; n>0; i++){
            cnt++;
            n = n/10;
      }
      return cnt;
}
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int count = sol.cntdigit(number);
      cout<<"The count of digits is: "<<count<<endl; // Output: 5 for input 12345
      return 0;
}