#include<bits/stdc++.h>
#define endl '\n';
#define  ios_base::sync_with_stdio(false); /
        cin.tie(NULL); /
        cout.tie(NULL);
using namespace std;
int main()
{
    int t,req,over;
    cin>>t;
    while(t--)
    {
        cin>>req>>over;
        if(req<=(over*36)){ cout<<"YES"<<endl; }    
        else {cout<<"NO"<<endl;}  
    }
    return 0;
}