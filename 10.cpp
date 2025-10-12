#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
            j=1;
            int a=1;
            if(i%2==0)
{
    char b='A';
while(j<=i){
            cout<<b  <<" ";
            j=j+1;
            b=b+1;
        }
}  
else{      while(j<=i){
            cout<<a  <<" ";
            j=j+1;
            a=a+1;
        }

    }
        cout<<endl;
        i=i+1;
    }
}