#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long d = 1;
        for (int i = 1; i <= b; i++)
        {
            d *= a;
            d %= c;
        }
        cout << d << endl;
    }
    return 0;
}