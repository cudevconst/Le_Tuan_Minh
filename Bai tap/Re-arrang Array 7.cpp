#include <bits/stdc++.h>
using namespace std;
int dem(int n)
{
    int k = 0;
    while (n > 0)
    {
        k++;
        n /= 10;
    }
    return k;
}
int sosanh(int a, int b)
{
    if (a * pow(10, dem(b)) + b > b * pow(10, dem(a)) + a)
        return 1;
    return 0;
}
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
            cin >> a[i];
        sort(a, a + n, sosanh);
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}