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
    while (t--)
    {
        int a;
        cin >> a;
        int sum = (a * (a + 1)) / 2;
        if (a == 1)
        {
            cout << 1 << endl;
        }
        else if(sum % a == 0){ 
            cout << -1 << endl;
        }
        else
        {
            for(int i=1; i<=a ;i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}