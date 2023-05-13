#include <iostream>
using namespace std;
int main()
{
    int n, An = 0, Tn = 0;
    cin >> n;
    char s[n];
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            An++;
            if(An==n/2)break;
        }
        else if (s[i] == 'T')
        {
            Tn++;
            if(Tn==n/2)break;
        }
    }
    if (An > Tn)
    {
        cout << "A";
    }
    else if (An < Tn)
    {
        cout << "T";
    }
}