#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b;
int main()
{
    bool ngto[1000000];
    memset(ngto, true, sizeof(ngto));
    for (int i = 2; i * i < 1000000; i++)
    {
        if (ngto[i])
        {
            for (int j = i * i; j < 1000000; j += i)
            {
                ngto[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll dem = 0;
        for (ll i = 2; i < 1000000; i++)
        {
            if (ngto[i] && i * i <= b && i * i >= a)
            {
                cout << i << " ";
                dem++;
            }
        }
        //cout << dem << endl;
    }
}