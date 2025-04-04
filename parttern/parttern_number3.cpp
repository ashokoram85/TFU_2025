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
void print3(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                  cout<<j<<" ";
            }
            cout<<endl;
      }
}
void print4(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                  cout<<i<<" ";
            }
            cout<<endl;
      }
}
void print5(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){
                  cout<<"*";
            }
            cout<<endl;
      }
}
void print6(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){
                  cout<<j<<" ";
            }
            cout<<endl;
      }
}
void print7(int n){
      for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                  //space
                  cout<<" ";
            }//stars
            for(int j=0; j<2*i+1; j++){
                  cout<<"*";
            }
            for(int j=0; j<n-i-1; j++){
                  //space
                  cout<<" ";
            }
            cout<<endl;
      }
}
void print8(int n){
      for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                  //space
                  cout<<" ";
            }//stars
            for(int j=0; j<2*n-(2*i+1); j++){
                  cout<<"*";
            }
            for(int j=0; j<i; j++){
                  //space
                  cout<<" ";
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
            print8(n);
      }

}