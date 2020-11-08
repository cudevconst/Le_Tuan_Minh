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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = n / 2;
        int d = (n - 1) / 2 + 1;
        for (int i = 0; i < c; i++)
        {
            cout << a[i] << " " << a[d + i] << " ";
        }
        if (c + c != n)
        {
            cout << a[c];
        }
        cout << endl;
    }
}