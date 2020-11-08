#include <iostream>
using namespace std;
void xet(long n)
{
    long a[10001], b[100];
    for (long i = 1; i < n; i++)
    {
        a[i] = i;
    }
    a[1] = -1;
    for (long i = 2; i < n; i++)
    {
        if (a[i] == -1)
            continue;
        for (long p = i * i; p < n; p += i)
        {
            a[p] = -1;
        }
    }
    long dem = 0;
    for (long i = 2; i <= n; i++)
    {
        if (a[i] == -1)
            continue;
        b[dem++] = a[i];
    }
    long k = 0;
    for (long i = 0; i < dem; i++)
    {
        for (long j = i; j < dem; j++)
        {
            if (b[i] + b[j] == n)
            {
                cout << b[i] << " " << b[j];
                k++;
                break;
            }
        }
        if (k == 1)
            break;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        xet(n);
        cout << endl;
    }
    return 0;
}