#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, m;
        cin >> n >> m;
        long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long dem = 0;
        for (long i = 0; i < n; i++)
        {
            dem++;
            if (a[i] == m)
            {
                cout << dem << endl;
                break;
            }
        }
    }
    return 0;
}