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
        int c;
        for (long long i = 2; i <= 100000; i++)
        {
            int dem = 0;
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                    dem++;
                }
                cout << i << " " << dem << " ";
            }
        }
        if (n != 1)
            cout << n << endl;
        cout << "\n";
    }
    return 0;
}