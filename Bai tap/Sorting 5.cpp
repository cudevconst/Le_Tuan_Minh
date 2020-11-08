#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
}
void xet1(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else if (a[i] > b[j])
        {
            cout << b[j++] << " ";
        }
        else
        {
            cout << b[j++] << " ";
            i++;
        }
    }
    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
}
void xet2(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                b[j] = 0;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        nhap(a, n);
        nhap(b, m);
        xet1(a, b, n, m);
        cout << endl;
        xet2(a, b, n, m);
        cout << endl;
    }
    return 0;
}