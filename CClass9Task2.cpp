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

    int area = a*b;
    int peri = 2*(a+b);

    cout << area <<" " << peri << endl;
    
    return 0;
}