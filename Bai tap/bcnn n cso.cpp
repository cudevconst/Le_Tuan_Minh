#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
        long long d = a * b / ucln(a, b);
        long long k = d * c / ucln(d, c);
        long long dem = k, xet = 1;
        int g = 0;
        while (dem != 0)
        {
            dem /= 10;
            g++;
        }
        if (g > m)
        {
            cout << -1 << endl;
            continue;
        }
        dem = k;
        for (int i = 1; i < g; i++)
        {
            xet *= 10;
        }
        while (g < m)
        {
            dem *= 10;
            xet *= 10;
            while (dem >= xet)
            {
                dem -= k;
            }
            dem += k;
            g++;
        }
        cout << dem << endl;
    }
    return 0;
}