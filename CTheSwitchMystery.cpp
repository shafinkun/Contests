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
    while(t--)
    {
        unsigned long long int n;
        cin >> n;
        unsigned long long int result = 0;
        result = (n / 3)*2;
        if(result == 0){
            cout << 1 << endl;
            continue;
        }
        if(n % 3 == 2){
            result++;
        }
        cout << result << endl;

    }
    return 0;
}