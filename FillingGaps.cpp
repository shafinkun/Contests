#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
         if (s[i] - s[i + 1] >1)
         {
             int n = s[i];
             int m = s[i + 1];
             while (n > m)
             {
                 cout << n << " ";
                 n--;
             }
         }
        else if (s[i + 1] - s[i] > 1)
        {
            int n = s[i];
            int m = s[i + 1];
            while (n < m)
            {
                cout << n << " ";
                n++;
            }
        }
        if (i = n - 1)
        {
            cout << s[i] << " ";
            break;
        }
    }
}