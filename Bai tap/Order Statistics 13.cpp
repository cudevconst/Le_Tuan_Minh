#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        long long max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += a[j];
            }
            for (int k = i + 1; k < m; k++)
            {
                sum += b[k];
            }
            if (sum > max)
                max = sum;
        }
        for (int i = 0; i < m; i++)
        {
            long long sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += b[j];
            }
            for (int k = i + 1; k < n; k++)
            {
                sum += a[k];
            }
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    }
    return 0;
}
