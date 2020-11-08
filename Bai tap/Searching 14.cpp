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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            int dem = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    dem++, k++;
                    cout << a[i] << endl;
                    break;
                }
            }
            if (dem == 1)
                break;
        }
        if (k == 0)
            cout << "-1" << endl;
    }
    return 0;
}