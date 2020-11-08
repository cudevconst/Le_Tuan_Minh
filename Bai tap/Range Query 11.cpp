#include <iostream>
#include <cmath>
using namespace std;
void xep(long a[100], long n)
{
    for (long i = 0; i < n - 1; i++)
    {
        for (long j = i + 1; j < n; j++)
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
        int n, a[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long dem = 0, b[1000000];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                b[dem++] = abs(a[i] - a[j]);
            }
        }
        xep(b, dem);
        cout << b[0] << endl;
    }
}