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
        ;
        int d = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            cout << a[d--] << " " << a[i] << " ";
        }
        if (n % 2 != 0)
            cout << a[d];
        cout << endl;
    }
    return 0;
}