#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
            j=1;
        while(j<=i){
           if( i==j ||(i+j)%2==0){
            cout<<"1 ";
           }
           else{
            cout<<"0 ";
           }
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}