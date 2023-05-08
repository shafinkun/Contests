#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,count=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a&b)||(a&c)||(b&c)){count++;}
    }
    cout<<count;
}