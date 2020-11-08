    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, m, a[100];
            cin >> n >> m;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            int dem = 0;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    int k = abs(a[i] + a[j]);
                    if (k == m)
                        dem++;
                }
            }
            cout << dem << endl;
        }
        return 0;
    }