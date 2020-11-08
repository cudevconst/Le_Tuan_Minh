#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coprime(ll a, ll b)
{
    while (b != 0)
    {
        ll tmp = a % b;
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
        ll a, b;
        cin >> a >> b;
        ll sum = (1 + a) * a / 2;
        if ((sum - b) % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }
        ll ans = (sum - b) / 2;
        if (coprime(ans, sum - ans) == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
