#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,req,over;
    cin>>t;
    while(t--)
    {
        cin>>req>>over;
        if(req<=(over*36)) cout<<"YES\n";    
        else cout<<"NO\n";    
    }
    return 0;
}