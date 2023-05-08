#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,count=0;
    cin>>n;
    for(n;n>=5;n=n-5)
    {
        count++;
    }
    // cout<<count<<endl;
    if(n>=4)for(n;n>=4;n=n-4)
    {
        count++;
    }
    if(n>=3)for(n;n>=3;n=n-3)
    {
        count++;
    }
    if(n>=2)for(n;n>=2;n=n-2)
    {
        count++;
    }
    if(n>=1) {count++;}
    cout<<count<<endl;
    
    return 0;
}