#include<iostream>
using namespace std;
int main(){
    int w,k,n;
    int s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        s=s+(k*i);
    }
    if(s>n){
        cout<<s-n;
    }
    else{
        cout<<"0";
    }
    return 0;
}