#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long min = a[0] + a[1];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long d = a[i] + a[j];
                if (abs(d) < abs(min))
                    min = d;
            }
        }
        cout << min << endl;
    }
    return 0;
}