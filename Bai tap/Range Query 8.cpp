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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long max = LLONG_MIN;
        int xet;
        for (int i = 0; i + m <= n; i++)
        {
            int sum = 0;
            for (int j = i; j < i + m; j++)
            {
                sum += a[j];
            }
            if (sum > max)
            {
                max = sum;
                xet = i;
            }
        }
        for (int i = xet; i < xet + m; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}