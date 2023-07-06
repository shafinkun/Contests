#include<bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
int main()
{
    optimize();

    short a , b , c;
    cin >> a >> b >> c;

    long long x = pow((a*a*a*a + 3*a*c),2) + 4*b*b*c + c*c;
    cout << x << endl;

    return 0;

}