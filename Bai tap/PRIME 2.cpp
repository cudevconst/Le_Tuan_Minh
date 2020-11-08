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
            while (n % i == 0)
            {
                c = i;
                n /= i;
            }
        }
        if (n != 1)
            cout << n << endl;
        else
            cout << c << endl;
    }
    return 0;
}