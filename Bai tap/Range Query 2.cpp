#include <bits/stdc++.h>
using namespace std;
void xet()
{
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int a, b;
    cin >> a >> b;
    for (int i = a + 1; i < b; i++)
    {
        if (c[i] < c[i - 1] && c[i] < c[i + 1])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        xet();
    }
    return 0;
}