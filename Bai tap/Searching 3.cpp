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
        long a[n];
        for (long i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        for (long i = 0; i < n - 1; i++)
        {
            if (a[i] != (i + 1))
            {
                cout << (i + 1);
                break;
            }
        }
        cout << endl;
    }
}