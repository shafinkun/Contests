#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    string result;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=a+b;
        string result = (c>6) ? "Yes" : "No";
        cout <<result<<endl;
    }
    return 0;
}