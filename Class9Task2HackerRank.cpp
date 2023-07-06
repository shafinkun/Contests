#include<bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
int main()
{
    optimize();

    short a , b;
    cin >> a >> b;

    long long x = a*a + 3*a + 2*b -2*a*b + b*b;
    cout << x << endl;

    return 0;

}