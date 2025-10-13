#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    int count=1;
    while(i<=n){
            j=1;
        while(j<=i){
         
            cout<<count<<"  ";
          
           j=j+1;
           count=count+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}