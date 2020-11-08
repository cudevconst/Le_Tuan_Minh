#include <bits/stdc++.h>
using namespace std;
long long a[93];
int ok(long long x)
{
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 93; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 0; i < 93; i++)
    {
        if (x == a[i])
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, a[93];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (ok(x) == 1)
                cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}