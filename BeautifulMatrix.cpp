#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5];
    int n,m;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]!=0){
                m=i;
                n=j;
            }
        }
    }
    if(m>=2) m=m-2;
    else m=2-m;
    if(n>=2) n=n-2;
    else n=2-n;
    cout<<n+m<<endl;
    return 0;
}