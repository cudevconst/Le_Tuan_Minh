#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long dem = 0;
        long i = 0;
        long j = 1;
        while (i < n)
        {
            while (j < n && a[j] < a[i] + k)
            {
                j++;
            }
            dem += j - i - 1;
            i++;
        }
        cout << dem << endl;
    }
}