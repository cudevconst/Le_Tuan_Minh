#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long dem2 = 0, k = 0;
        for (long long i = 2; i <= 10000; i++)
        {
            long long dem1 = 0;
            while (n % i == 0)
            {
                dem2++;
                dem1++;
                n /= i;
            }
            if (dem1 > 1)
            {
                k++;
                cout << "0" << endl;
                break;
            }
        }
        if (k > 0)
            continue;
        if (dem2 == 3)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}