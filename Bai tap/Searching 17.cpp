#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // int dem = 1;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (a[i + 1] > a[i])
        //     {
        //         dem++;
        //     }
        //     if (dem == k)
        //     {
        //         cout << a[i + 1] << endl;
        //         break;
        //     }
        // }
        cout << a[k - 1] << endl;
    }
}