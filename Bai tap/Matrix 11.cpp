#include <bits/stdc++.h>
using namespace std;
int a[100][100];
//dem full 1 tu hang a den b
int xet(int b, int c, int m)
{
    int dem = 0;
    for (int i = 1; i <= m; i++)
    {
        int xet = 0;
        for (int j = b; j <= c; j++)
        {
            if (a[j][i] == 1)
                xet++;
        }
        if (xet == c - b + 1)
            dem++;
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                // dien tich cua hcn
                k = max(k, xet(i, j, m) * (j - i + 1));
            }
        }
        cout << k << endl;
    }
}