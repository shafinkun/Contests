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

    int n;
    cin >> n;

    int x = n % 10;
    x = x+ x*10 + x*100;

    n = n/10;
    int y = n % 10;
    y = y+ y*10 + y*100 + x;

    n = n/10;
    int z = n % 10;
    z = z+ z*10 + z*100 + y;

    cout << z << endl;
    

    return 0;
}