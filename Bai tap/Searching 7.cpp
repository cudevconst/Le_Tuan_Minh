#include <iostream>
using namespace std;
void xep(long a[], long n)
{
    for (long i = 0; i < n - 1; i++)
    {
        for (long j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                long tmp = a[i];
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
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        xep(a, n);
        for (int i = 1; i <= m; i++)
        {
            cout << a[n - i] << " ";
        }
        cout << endl;
    }
    return 0;
}