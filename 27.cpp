#include<iostream>
using namespace std;
int main(){
 int i,j,k,n;
 cin>>n;
 i=1;

 while(i<=2*n-1){
cout<<"* "<<" ";
i=i+1;

}
cout<<endl;
j=1;

while(j<=n-1){
k=1;

while(k<=n-j){
  cout<<"* "<<" ";
 
  k=k+1;
}

int l=1;
while(l<=2*j-1){
cout<<"  "<<" ";
l=l+1;

}
int m=1;
while(m<=n-j){
  cout<<"* "<<" ";
  m=m+1;
}
cout<<endl;
j=j+1;
 }
 return 0;
  }

