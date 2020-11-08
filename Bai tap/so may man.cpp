#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, dem = 0;
        cin >> n;
        for (int i = 0; i < 2; i++)
        {
            m = n % 10;
            if (i == 0)
            {
                if (m != 6)
                    dem++;
            }
            if (i == 1)
            {
                if (m != 8)
                    dem++;
            }
            n /= 10;
        }
        if (dem > 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}