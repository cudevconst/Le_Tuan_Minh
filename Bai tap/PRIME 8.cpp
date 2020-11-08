#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "0" << endl;
            continue;
        }
        long dem = 0, xet;
        for (long i = b; i <= a; i += b)
        {
            xet = i;
            while (xet % b == 0)
            {
                dem++;
                xet /= b;
            }
        }
        cout << dem << endl;
    }
}