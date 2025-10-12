#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    
    while(i<=n){
            j=1;
        while(j<=n-i){
         
            cout<<"  ";
            j=j+1;
        }
        //    j=j+1;
        //    count=count+2;
        j=1;
 while(j<=i){
         
            cout<<"* ";
            j=j+1;

        }
        int l=1;
        while(l<=n-i){
            cout<<"* ";
            l=l+1;
        }

 cout<<endl;
        i=i+1;
        }
        return 0;
       
    }
