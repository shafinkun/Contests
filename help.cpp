#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, t, max = 0, index;
        cin >> n >> t;
        int VidLen[n];
        for (int i = 0; i < n; i++)
        {
            cin >> VidLen[i];
        }
        int EntVal[n];
        for (int i = 0; i < n; i++)
        {
            cin >> EntVal[i];
        }
        for (int i = 0; i < n; i++)
        {
            
            if (VidLen[i] <= t)
            {
                t--;
                if (max < EntVal[i])
                {
                    max = EntVal[i];
                    index = i + 1;
                }
            }
            else if (VidLen[i] > t)
            {
                t--;
                if (i == 0)
                {
                    index = -1;
                    break;
                }
            }
        }
        cout << index << endl;
    }
    return 0;
}