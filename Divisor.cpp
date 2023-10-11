#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        int a=1;
        cin >> n >> k;
        while(k!=0)
        {
            if(!( a%n == 0)){
                k--;
            }
            if(k==0){
                break;
            }
            a++;
        }
        cout<<a<<'\n';
    }
    return 0;
}