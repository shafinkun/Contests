#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a || b==a) cout<<0<<endl;
        else {
            int c=a-b;
            cout<<c<<endl;
        }
    }
    return 0;
}