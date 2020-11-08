#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> a(n);
        int b[10];
        for (int i = 0; i <= 9; i++)
        {
            b[i] = 0;
        }
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] > 0)
            {
                b[a[i] % 10] = 1;
                a[i] /= 10;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            if (b[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}