#include<iostream>
using namespace std;
void print(int n){
      cout<<"The square of the parttern is:\n";
      for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                  cout<<"A";
            }
            cout<<endl;
      }
}
int main(){
      int n;
      cout<<"Enter the size :";
      cin>>n;
      for(int i=0; i<n; i++){
            int n;
            cout<<"Enter the rows size: ";
            cin>>n;
            print(n);
      }

}