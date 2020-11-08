#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        vector<int> c(n + 1);
        c[0] = 1;
        c[1] = 1;
        for (int i = a; i <= n; i += a)
        {
            c[i] = 1;
        }
        for (int i = b; i <= n; i += b)
        {
            c[i] = 1;
        }
        int dem = 0;
        for (int i = m; i <= n; i++)
        {
            if (c[i] == 1)
                dem++;
        }
        cout << dem << endl;
    }
}