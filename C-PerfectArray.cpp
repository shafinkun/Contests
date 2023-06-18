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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        int sum = accumulate(v.begin(), v.end(), 0);

        while (sum % n != 0)
        {
            v[0] += 1;
            sum = accumulate(v.begin(), v.end(), 0);
        }
        for (auto u : v)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}