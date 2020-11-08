#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a[100][100], x;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (m > n)
            x = n;
        else
            x = m;
        x /= 2;
        int tmp;
        for (int i = 0; i < x; i++)
        {
            tmp = a[i][i];
            for (int j = i + 1; j < n - i; j++)
            {
                a[j - 1][i] = a[j][i];
            }
            for (int j = i + 1; j < m - i; j++)
            {
                a[n - i - 1][j - 1] = a[n - i - 1][j];
            }
            for (int j = n - i - 2; j >= i; j--)
            {
                a[j + 1][m - i - 1] = a[j][m - i - 1];
            }
            for (int j = m - i - 2; j > i; j--)
            {
                a[i][j + 1] = a[i][j];
            }
            a[i][i + 1] = tmp;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}