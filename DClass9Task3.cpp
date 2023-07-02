#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi 3.14159265358979

using namespace std;
int main()
{
    optimize();

    int r;
    cin >> r;

    double area = pi*r*r;
    double cir = 2*pi*r;

    cout << setprecision(10) << fixed << area <<" "<< setprecision(10) << fixed << cir << endl;
    
    return 0;
}