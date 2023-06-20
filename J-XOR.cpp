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

        if(n % 2 != 0)
        {
            for(int i=1; i <= n ; i++)
            {
                cout << 1 << " " ;
            }
            cout << endl;
        }
        else{
            cout << 1 << " " << 3 << " ";
            for(int i=1; i<=(n-2) ; i++)
            {
                cout << "2" << " ";
            }
            cout << endl;
        }
    }

    return 0;
}