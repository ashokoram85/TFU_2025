#include   <iostream>
using namespace std;
int start = 0;
void cnt(){
      if(start ==4){
            return;
      }
      cout<<start<<endl;
      start++;
      cnt();

}
int main() {
      cnt();
      return 0;
} // This will cause infinite recursion and eventually a stack overflow error.