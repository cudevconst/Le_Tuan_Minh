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
        long long a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long i = 0; i < n; i++)
        {
            int dem = 0;
            for (long j = 0; j < n; j++)
            {
                if (i == a[j])
                    dem++;
            }
            if (dem == 0)
                cout << "-1 ";
            else
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}