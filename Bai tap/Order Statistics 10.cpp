#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[0] = 1;
        for (int i = 1; i < n; i++)
        {
            b[i] = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i] && b[j] > b[i])
                {
                    b[i] = b[j];
                }
            }
            b[i] += 1;
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] > max)
                max = b[i];
        }
        cout << max << endl;
    }
    return 0;
}