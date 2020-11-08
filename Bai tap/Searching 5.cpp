#include <iostream>
using namespace std;
void xet(long a[], long n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] == a[i])
                dem++;
        }
        if (dem == n - 1)
        {
            cout << "-1" << endl;
            continue;
        }
        xet(a, n);
        cout << a[0] << " ";
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] > a[i])
            {
                cout << a[i + 1] << endl;
                break;
            }
        }
    }
    return 0;
}