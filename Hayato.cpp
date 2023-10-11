#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int even=0;
    int odd=0;
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if((odd==3)||(even==2 && odd==1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}