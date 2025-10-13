#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
            j=1;
        while(j<=n){
           if(i==1 || j==1 || j== 6 || i==6){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}