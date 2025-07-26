#include<iostream>
using namespace std;
// Function to print a message
void printMessage() {
      if(true) {
            cout << "This is a message from printMessage function." << endl;
      }
    cout << "Hello, World!" << endl;
    printMessage();
}
int main() {
      printMessage();
      return 0;
}//infinite recursion