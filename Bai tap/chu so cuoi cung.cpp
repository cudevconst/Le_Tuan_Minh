#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long sum = n;
        while (n % 10 != n)
        {
            long sum = 0;
            while (n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        cout << n << endl;
    }
    return 0;
}