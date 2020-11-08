#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[0] = a[0];
        b[1] = a[1];
        b[2] = a[0] + a[2];
        for (int i = 3; i < n; i++)
        {
            b[i] = max(b[i - 2], b[i - 3]) + a[i];
        }
        cout << max(b[n - 1], b[n - 2]) << endl;
    }
    return 0;
}