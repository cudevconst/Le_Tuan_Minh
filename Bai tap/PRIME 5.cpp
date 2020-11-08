#include <iostream>
using namespace std;
void xet(long m, long n)
{
    long a[10001];
    for (long i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    a[1] = -1;
    for (long i = 2; i <= n; i++)
    {
        if (a[i] == -1)
            continue;
        for (long p = i * i; p <= n; p += i)
        {
            a[p] = -1;
        }
    }
    for (long i = m; i <= n; i++)
    {
        if (a[i] == -1)
            continue;
        cout << a[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long m, n;
        cin >> m >> n;
        xet(m, n);
        cout << endl;
    }
    return 0;
}