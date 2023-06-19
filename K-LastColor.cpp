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
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (arr[i][j] == 'R')
                        count++;
                }
            if (count == 8)
            {
                cout << "R" << endl;
                break;
            }
            else if(i == 7){
                cout << "B" <<endl;
            }
        }
    }
    return 0;
}