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
    string s;
    cin >> s;
    int four = count(s.begin(), s.end(), '4');
    int seven = count(s.begin(), s.end(), '7');
    
    if (four == 0 && seven==0)
    {
        cout << -1 << endl;
    }
    else if (four >= seven)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 7 << endl;
    }
    return 0;
}