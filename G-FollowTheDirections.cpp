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
        int x = 0, y = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'R'){
                x++;
                if(x==1 && y==1){
                    cout << "YES" <<endl;
                    break;
                }
            }
            else if(s[i] == 'L'){
                x--;
                if(x==1 && y==1){
                    cout << "YES" <<endl;
                    break;
                }
            }
            else if(s[i] == 'U'){
                y++;
                if(x==1 && y==1){
                    cout << "YES" <<endl;
                    break;
                }
            }
            else if(s[i] == 'D'){
                y--;
                if(x==1 && y==1){
                    cout << "YES" <<endl;
                    break;
                }
            }
            if(i==n-1){
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}