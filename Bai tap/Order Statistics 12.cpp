#include <iostream>
using namespace std;
void xep(long b[100], long dem)
{
    for (long i = 0; i < dem - 1; i++)
    {
        for (long j = i + 1; j < dem; j++)
        {
            if (b[i] > b[j])
            {
                int tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long b[n], dem = 0, h = 0;
        for (long i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                b[dem++] = a[i];
                h++;
            }
        }
        if (h == 0)
        {
            cout << "1" << endl;
            continue;
        }
        xep(b, dem);
        long xet = 0;
        for (long i = 1; i <= b[dem - 1]; i++)
        {
            long k = 0;
            xet++;
            for (long j = 0; j < dem; j++)
            {
                if (i != b[j])
                    k++;
            }
            if (k == dem)
            {
                cout << i << endl;
                break;
            }
        }
        if (xet == b[dem - 1])
            cout << b[dem - 1] + 1 << endl;
    }
    return 0;
}