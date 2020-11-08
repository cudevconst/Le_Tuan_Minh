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
        int a[n];
        long long max = INT_MIN, xet = INT_MIN, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i];
            if (s >= 0)
                s += a[i];
            else
                s = a[i];
            if (s > xet)
                xet = s;
        }
        cout << (max > xet ? max : xet) << endl;
    }
    return 0;
}