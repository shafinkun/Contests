#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<n;i++)
        {
            if(num[i]=='1' ||num[i]=='2' ||num[i]=='3' ||num[i]=='4' ||num[i]=='5' ||num[i]=='6' || num[i]=='7'){count++;} 
            if(count==7){cout<<i<<endl;}
        }
    }
    return 0;
}