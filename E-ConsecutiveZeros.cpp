#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int max = 0, zero = 0;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(a == 0) {zero++;}
            else zero=0;
            if(zero > max) max=zero;
        }
        cout << max << endl;
    }
    return 0;
}