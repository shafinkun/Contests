#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t;
    cin>>a>>t;
    while(t--){
        if(a%10!=0){
            a-=1;
        }
        else {a/=10;}
    }
    cout<<a;
    return 0;
}