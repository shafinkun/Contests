#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        string s;
        cin >> s;
        for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
        {
            if (s.size() % 2 == 0)
            {
                break;
            }
            if (s[i] == s[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}