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
        int dem = 0;
        for (long i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                dem++;
                continue;
            }
            else
                cout << a[i] << " ";
        }
        for (long i = 0; i < dem; i++)
        {
            cout << "0 ";
        }
        cout << "\n";
    }
    return 0;
}