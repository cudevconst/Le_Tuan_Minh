#include <bits/stdc++.h>
using namespace std;
// UCLN(so du cua string , a)
long GCD(long a, long b)
{
    if (a == 0)
        return b;
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long xet(long a, string b)
{
    long tmp = 0;
    for (int i = 0; i < b.length(); i++)
    {
        tmp = (tmp * 10 + b[i] - '0') % a;
    }
    return tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a;
        string b;
        cin >> a >> b;
        cout << GCD(a, xet(a, b)) << endl;
    }
}