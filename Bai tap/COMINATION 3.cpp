#include <iostream>
using namespace std;
#define max 100000
#define true 1
#define false 0
int n, a[max], b[max];
void xet(int dem)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            b[dem] = i;
            a[i] = false;
            if (dem == n)
            {
                for (int dem = 1; dem <= n; dem++)
                    cout << b[dem];
                cout << " ";
            }
            else
                xet(dem + 1);
            a[i] = true;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a[i] = true;
        }
        xet(1);
        cout << endl;
    }
    return 0;
}