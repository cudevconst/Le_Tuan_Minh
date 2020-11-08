#include <bits/stdc++.h>
using namespace std;

void nhap(long long a[], long long n)
{
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int min(long long a, long long b, long long c)
{
    long long k = a;
    if (k > b)
        k = b;
    if (k > c)
        k = c;
    return k;
}
void xet(long long a[], long long b[], long long c[], long long n1, long long n2, long long n3)
{
    long long i = 0, j = 0, k = 0;
    long long ok, dem = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        ok = min(a[i], b[j], c[k]);
        if (ok == a[i] && ok == b[j] && ok == c[k])
        {
            cout << ok << " ";
            dem = 1;
            a[i++];
            b[j++];
            c[k++];
        }
        else if (ok == a[i])
            a[i++];
        else if (ok == b[j])
            b[j++];
        else if (ok == c[k])
            c[k++];
    }
    if (dem == 0)
        cout << "-1" << endl;
    else
        cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        nhap(a, n1);
        nhap(b, n2);
        nhap(c, n3);
        xet(a, b, c, n1, n2, n3);
    }
}