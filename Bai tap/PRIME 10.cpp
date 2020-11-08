#include <bits/stdc++.h>
using namespace std;
long ngto(long n)
{
    if (n < 2)
        return 0;
    long dem = 0;
    for (long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem == 0;
}
long tong(long n)
{
    long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void xet(long n)
{
    long xet = n;
    long sum = 0;
    while (n % 2 == 0)
    {
        sum += 2;
        n /= 2;
    }
    for (long i = 3; i <= sqrt(xet); i++)
    {
        while (n % i == 0)
        {
            sum += tong(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        sum += tong(n);
    }
    if (sum == tong(xet))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if (ngto(n))
        {
            cout << "NO" << endl;
            continue;
        }
        else
            xet(n);
    }
}