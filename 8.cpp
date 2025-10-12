# include <iostream>
using namespace std;
int main(){
    int i,r;
int n;
    cin>>n;
    i=1;

    while(i<=n){
char p='A';
int r=1;
while(r<=n){
    cout<<p<<" ";
    p=p+1;
    r=r+1;
}
cout<<endl;
i=i+1;

    }
return 0;
}