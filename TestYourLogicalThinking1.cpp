#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]>=1 && num[i]<=7){
                count++;
                if(count==7){
                cout<<i+1<<endl;}
            }
        }
    }
    return 0;
}