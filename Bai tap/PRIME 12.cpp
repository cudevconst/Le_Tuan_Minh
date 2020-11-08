#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        int c, dem = 0;
        for (long long i = 2; i <= 100000; i++)
        {
            while (n % i == 0)
            {
                n /= i;
                dem++;
                if (dem == m)
                {
                    cout << i;
                    break;
                }
            }
        }
        if (m > dem)
            cout << "-1";
        cout << "\n";
    }
    return 0;
}
