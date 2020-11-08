#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long m, n;
        cin >> n >> m;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        for (long i = 0; i < n; i++)
        {
            dem++;
            if (a[i] == m)
            {
                cout << dem << endl;
                break;
            }
        }
        if (dem == n)
            cout << "-1" << endl;
    }
    return 0;
}