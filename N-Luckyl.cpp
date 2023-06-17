#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n=num;
    bool check = true;
    while (n)
    {
        int last = n % 10;
        if (last != 7 && last != 4)
        {
            check = false;
            break;
        }
        n = n / 10;
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (num%4==0||num%7==0||num%44==0||num%77==0||num%47==0||num%74==0||num%444==0||num%777==0||num%447==0||num%744==0||num%474==0||num%774==0||num%747==0||num%477==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}