#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
            j=1;
            char a='A';
        while(j<=i){
            cout<<a  <<" ";
            j=j+1;
            a=a+1;
        }
        cout<<endl;
        i=i+1;
    }
}