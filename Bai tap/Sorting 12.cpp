#include <iostream>
using namespace std;
void xep(long a[100], long n)
{
    for (long i = 0; i < n - 1; i++)
    {
        for (long j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long a[n], b[m];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        xep(a, n);
        xep(b, m);
        cout << a[n - 1] * b[0] << endl;
    }
    return 0;
}