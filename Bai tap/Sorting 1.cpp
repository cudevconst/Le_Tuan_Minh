#include <iostream>
using namespace std;
void xep(int a[1000], int n)
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
        int n, a[1000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        xep(a, n);
        int k = n, h = 0, m = n - 1, dem = 0;
        while (k > 0)
        {
            cout << a[m--] << " ";
            dem++;
            if (dem == (n))
                break;
            cout << a[h++] << " ";
            k -= 2;
            dem++;
        }
        cout << endl;
    }
    return 0;
}