#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long a[n];
        for (long i = 2; i <= n; i++)
        {
            a[i] = i;
        }
        a[0] = 0, a[1] = 0;
        for (long i = 2; i <= n; i++)
        {
            if (a[i] == 0)
                continue;
            for (long j = i * i; j <= n; j += i)
            {
                a[j] = 0;
            }
        }
        long k, xet = 0;
        for (long i = n; i >= 2; i--)
        {
            if (a[i] != 0)
            {
                k = n - i;
                if (a[k] != 0)
                {
                    cout << k << " " << i << endl;
                    xet = 1;
                    break;
                }
            }
        }
        if (xet == 0)
            cout << "-1" << endl;
    }
}