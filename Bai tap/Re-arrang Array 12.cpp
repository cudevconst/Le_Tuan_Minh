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
        int a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long max = INT_MIN;
        for (long long i = 0; i < n; i++)
        {
            if (!a[i])
                continue;
            long long tich = 1;
            long long k = i;
            while (k < n)
            {
                tich *= a[k];
                if (tich > max)
                    max = tich;
                if (!tich)
                    break;
                k++;
            }
        }
        cout << max << endl;
    }
    return 0;
}