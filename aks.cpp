#include<iostream>
using namespace std;
int main(){
int a[100],n,b;
cout<<"enter the size of array";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter the element";
    cin>>a[i];
}
cout<<"enter the element to delete";
cin>>b;
for(int i=0;i<n;i++){
    if(a[i]==b){
        for(int j=0;j<(n-i-1);j++){
            a[i+j]=a[i+j+1];
        }
    break;}
}
for(int i=0;i<n-1;i++){
    cout<<a[i];
}
return 0;
}


