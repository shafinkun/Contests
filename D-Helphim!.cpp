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
        int n, k;
        cin >> n >> k;
        int count = 0;
        int s[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
            if (s[i] > k)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}