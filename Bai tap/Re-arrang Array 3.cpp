#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k, dem = 0, max = 0;
        cin >> n >> k;
        int a[n], b[n];
        b[0] = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
            {
                dem++;
                b[i + 1] = b[i] + 1;
            }
            else
                b[i + 1] = b[i];
        }
        for (long i = 0; i < n - dem + 1; i++)
        {
            if (max < b[i + dem] - b[i])
                max = b[i + dem] - b[i];
        }
        cout << dem - max << endl;
    }
}