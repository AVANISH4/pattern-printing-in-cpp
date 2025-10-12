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
        int j=1;
      char  l='A';
 while(j<=i){
         
            cout<<l<<" ";
            l=l+1;
j=j+1;
        }

 cout<<endl;
        i=i+1;
        }
       return 0;
    }
