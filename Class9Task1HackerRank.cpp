#include<bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
int main()
{
    optimize();

    int a , b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << a+b << endl;   
    cout << a << " - " << b << " = " << a-b << endl;   
    cout << a << " x " << b << " = " << 1LL*a*b << endl;   

    return 0;

}