#include <bits/stdc++.h>
using namespace std;
void xet(int n)
{
    int a[n];
    for (long i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for (long i = 2; i <= n; i++)
    {
        for (long p = i * i; p <= n; p += i)
        {
            if (a[p] < a[i])
                continue;
            a[p] = a[i];
        }
    }
    for (long i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        xet(n);
        cout << endl;
    }
    return 0;
}
