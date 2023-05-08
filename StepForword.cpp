#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,count=0;
    cin>>n;
    if(n%5==0){
        count=n/5;
    }
    else {
        count=count+n/5;
        n=n%5;
        if(n%4==0){
        count=count+n/4;}
        else {
            count=count+n/4;
            n=n%4;
            if(n%3==0){
                count=count+n/3;
            }
            else{
                count=count+n/3;
                n=n%3;
                if(n%2==0){
                    count=count+n/2;
                }
                else{
                    count=count+n/2+1;
                }
            }
        }
    }
    cout<<count;
    
    return 0;
}