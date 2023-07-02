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

    int a,b;
    cin >> a >> b;

    int resultant = a/b;
    int remainder = a%b;
    double c = a, d = b;
    double result = c/d;
 
    cout << resultant << " " << remainder <<" " << fixed << setprecision(5) << result << endl;

    return 0;
}