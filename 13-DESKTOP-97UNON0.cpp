#include<iostream>
using namespace std;
int main(){
    int i,j;
    i=1;
    // cin>>n;
    while(i<=4){
            j=1;
        while(j<=6){
           if(i==1 || j==1 || j== 6 || i==4){
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