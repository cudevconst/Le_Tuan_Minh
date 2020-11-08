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
        int mang[n];
        for (long i = 0; i < n; i++)
        {
            mang[i] = 0;
        }
        for (long i = 0; i < n; i++)
        {
            cout << mang[i];
        }
        cout << " ";
        for (long i = n - 1; i >= 0; i--)
        {
            if (mang[i] == 0)
            {
                mang[i] = 1;
                for (long j = i + 1; j < n; j++)
                {
                    mang[j] = 0;
                }
                for (long j = 0; j < n; j++)
                {
                    cout << mang[j];
                }
                cout << " ";
                i = n;
            }
        }
        cout << "\n";
    }
    return 0;
}