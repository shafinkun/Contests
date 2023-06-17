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
        int size, insert;
        cin >> size >> insert;
        string num;
        cin >> num;
        string a = to_string(insert);

        if (insert == 0)
        {
            cout << num + "0" << endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                if (num[i] < a[0])
                {
                    num.insert(i, 1, a[0]);
                    cout << num << endl;
                    break;
                }
                if (i == (size - 1) && num[i] >= a[0])
                {
                    cout << num + a << endl;
                }
            }
        }
    }
    return 0;
}