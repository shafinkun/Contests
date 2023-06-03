#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int num[n];
    int min = 0, count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        if (num[i] == 0)
            continue;
        if (min <= num[i])
            count++;
        if (i == k)
            min = num[i];
    }
    cout << count << endl;
    return 0;
}