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
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != st[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}