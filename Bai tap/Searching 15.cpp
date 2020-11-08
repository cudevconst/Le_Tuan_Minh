#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k, x;
        cin >> n;
        long a[n], xet;
        long long b[a[n]];
        memset(b, -1, sizeof(b));
        long tra = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> k >> x;
        for (long i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                b[a[i]] = x;
                tra++;
                xet = i;
            }
            else
                b[a[i]] = 0;
        }
        long dem = 0;
        for (long i = 1; i < n; i++)
        {
            if (b[a[xet - tra + 1 - i]] == 0)
            {
                b[a[xet - i]] = a[xet - i];
                dem++;
            }
            if (b[a[xet + i]] == 0)
            {
                b[a[xet + i]] = a[xet + i];
                dem++;
            }
            if (dem == k)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] != 0 && a[i] != x)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}