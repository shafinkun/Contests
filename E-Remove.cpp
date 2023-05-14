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
        int n;
        cin >> n;
        int s[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] >= 1000)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}