#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k, x;
        long xet = -1;
        long a[100001] = {0};
        cin >> n >> k;
        long max = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> x;
            a[x] = 1;
            if (x > max)
                max = x;
        }
        for (long i = 0; i <= max - k; i++)
        {
            if (a[i] == 1 && a[i + k] == 1)
            {
                xet = 1;
                break;
            }
        }
        cout << xet << endl;
    }
}