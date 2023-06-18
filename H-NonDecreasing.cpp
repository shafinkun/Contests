#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
bool check(vector<int> w);
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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int count = 0;
        while (!check(v))
        {
            int first=0,prothom=0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i]=='1') {
                    first++;
                    if(first == 1){v.erase(v.begin()+i);
                    break;}
                }
                else if (v[i]=='0') {
                    prothom++;
                    if(prothom == 1)
                    {v[i]='1';}
                }
                if(prothom==1 && first==1) break;
            }
            
            count++;
        }
        cout << count <<endl;
    }
    return 0;
}

bool check(vector<int> w)
{
    int size = w.size();
    for (int i = 0, j = 1; i < (size - 1), j < size; i++)
    {
        if (w[i] > w[j])
            return false;
    }
    return true;
}