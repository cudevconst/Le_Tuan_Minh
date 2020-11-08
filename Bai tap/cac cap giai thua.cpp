#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        int c[100], dem = 0;
        while (b != 0)
        {
            int k = b % 10;
            b /= 10;
            if (k < 2)
                continue;
            if (k == 4)
            {
                c[dem++] = 2;
                c[dem++] = 2;
                c[dem++] = 3;
            }
            else if (k == 6)
            {
                c[dem++] = 5;
                c[dem++] = 3;
            }
            else if (k == 8)
            {
                c[dem++] = 2;
                c[dem++] = 2;
                c[dem++] = 2;
                c[dem++] = 7;
            }
            else if (k == 9)
            {
                c[dem++] = 3;
                c[dem++] = 3;
                c[dem++] = 2;
                c[dem++] = 7;
            }
            else
                c[dem++] = k;
        }
        sort(c, c + dem);
        for (int i = dem - 1; i >= 0; i--)
        {
            cout << c[i];
        }
        cout << endl;
    }
    return 0;
}