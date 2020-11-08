#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        long long b;
        cin >> a >> b;
        long long xet = 0;
        for (int i = 0; i < a.length(); i++)
        {
            xet = (xet * 10 + a[i] - '0') % b;
        }
        cout << xet << endl;
    }
    return 0;
}