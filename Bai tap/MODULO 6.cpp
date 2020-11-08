#include <bits/stdc++.h>
using namespace std;
//(a.a....)%m=((a%m)(a&m)...)%m
long xet(string a, long m)
{
    int ans = 0;
    for (int i = 0; i < a.length(); i++)
    {
        ans = (ans * 10 + a[i] - '0') % m;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        long long b, m;
        cin >> a >> b >> m;
        long ans = xet(a, m);
        for (int i = 1; i <= b; i++)
        {
            ans = (ans * ans) % m;
        }
        cout << ans << endl;
    }
}