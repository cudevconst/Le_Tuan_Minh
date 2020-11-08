#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long dem = 0;
        long max = -11;
        for (int i = n - 1; i >= 0; i--)
        {
            long k = 1;
            while (k <= i)
            {
                long xet = a[i] - a[i - k];
                if (xet > 0 && xet > max)
                {
                    max = xet;
                    dem++;
                }
                k++;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
        else
            cout << max << endl;
    }
    return 0;
}