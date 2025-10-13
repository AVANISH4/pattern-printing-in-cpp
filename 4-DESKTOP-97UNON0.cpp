#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
            j=1;
        while(j<=n-i+1){
            cout<<"*  "<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}