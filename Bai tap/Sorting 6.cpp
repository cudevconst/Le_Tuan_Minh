#include <iostream>
using namespace std;
void xep(long a[1000], long n)
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
        int n;
        cin >> n;
        long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0 && a[i] != 2 && a[i] != 1)
                return 0;
        }
        xep(a, n);
        for (long i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}