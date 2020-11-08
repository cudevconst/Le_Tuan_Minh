#include <iostream>
#include <cmath>
using namespace std;
int ngto(int n)
{
    if (n < 2)
        return 0;
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        for (long long i = 2; i <= n; i++)
        {
            if (ngto(i) == 1)
            {
                if (i * i > n)
                    break;
                cout << i * i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}