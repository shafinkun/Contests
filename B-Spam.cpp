#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>10*y){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    return 0;
}