#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,count=1;
        cin>>n>>x;
        int max=x,min=x;
        char s[1000];
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R'){
                x++;
                if(x>max){
                    max=x;
                    count++;
                }
            }
            else if(s[i]=='L'){
                x--;
                if(x<min){
                    min=x;
                    count++;
                }
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}