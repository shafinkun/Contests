#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    bool flag = true;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == i)
            {
                flag = false;
                break;
            }
            else
                flag = true;
        }
        if (flag)
            cout << i << " ";
    }
    return 0;
}