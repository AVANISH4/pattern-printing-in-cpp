#include<iostream> 
using namespace std;
int main(){
 int i,j,k,n;
 cin>>n;
 i=1;
 char cp='A';
 while(i<=2*n-1){
cout<<cp<<" ";
i=i+1;
cp=cp+1;
}
cout<<endl;
j=1;

while(j<=n-1){
k=1;
char np='A';
while(k<=n-j){
  cout<<np<<" ";
  np=np+1;
  k=k+1;
}
int l=1;
while(l<=2*j-1){
cout<<" "<<" ";
l=l+1;
np=np+1;
}
int m=1;
while(m<=n-j){
  cout<<np<<" ";
  m=m+1;
  np=np+1;
}
cout<<endl;
j=j+1;
 }
 return 0;
  }

