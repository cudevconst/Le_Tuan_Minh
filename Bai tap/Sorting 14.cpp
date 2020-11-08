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
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int k = 0;
        for (long i = a[0] + 1; i < a[n - 1]; i++)
        {
            int dem = 0;
            for (long j = 0; j < n; j++)
            {
                if (i == a[j])
                    dem++;
            }
            if (dem == 0)
                k++;
        }
        cout << k << endl;
    }
    return 0;
}