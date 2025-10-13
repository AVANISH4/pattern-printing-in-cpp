#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
   
    while(i<=n){
         int nst=1;
            j=1;
        while(j<=n-i){
         
            cout<<"  ";
            j=j+1;
           
        }
        //    j=j+1;
        //    count=count+2;
        j=1;
 while(j<=i){
         
            cout<<nst<<" ";
            j=j+1;
             nst=nst+1;

        }
       int p=nst-2;
        int l=1;
        while(l<i){
            cout<<p<<" "; 
           
            l=l+1;
            p=p-1;
        }

 cout<<endl;
        i=i+1;
        }
       return 0;
    }
