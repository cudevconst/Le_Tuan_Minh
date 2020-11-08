#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n][n], b[n * n];
        long long dem = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[dem++] = a[i][j];
            }
        }
        sort(b, b + dem);
        cout << b[m - 1] << endl;
    }
    return 0;
}