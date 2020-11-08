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
        int a[n], dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && a[i + 1] == a[i])
            {
                a[i + 1] = 0;
                a[i] *= 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                dem++;
                continue;
            }
            else
                cout << a[i] << " ";
        }
        for (int i = 0; i < dem; i++)
            cout << "0 ";
        cout << endl;
    }
    return 0;
}