#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[100][100], b[10000];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int k = 0, d = 0;
        while (d <= n / 2)
        {
            for (int i = d; i < m - d; i++)
            {
                b[k++] = a[d][i];
            }
            for (int i = d + 1; i < n - d; i++)
            {
                b[k++] = a[i][m - d - 1];
            }
            for (int i = m - d - 2; i >= d; i--)
            {
                b[k++] = a[n - d - 1][i];
            }
            for (int i = n - d - 2; i > d; i--)
            {
                b[k++] = a[i][d];
            }
            d++;
        }
        for (int i = 0; i < n * m; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
