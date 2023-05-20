#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout<<s[0]<<" ";
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            while (s[i]--)
            {
                cout << s[i]<<" ";
                if (s[i] == s[i + 1])
                    break;
            }
        }
        else if (s[i] < s[i + 1])
        {
            while (s[i]++)
            {
                cout << s[i]<<" ";
                if (s[i] == s[i + 1])
                    break;
            }
        }
        else
        {
            cout << s[i]<<" ";
        }
    }
    return 0;
}