#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int d = x.size() - 1;
        for (; d > 0;)
        {
            if (x[d] < x[d - 1])
                break;
            else if (x[d] == x[d - 1])
                d--;
            else
                d--;
        }

        int dem = 0;
        for (long i = d; i <= x.size(); i++)
        {
            if (x[i] < x[d - 1])
            {
                dem = 1;
                swap(x[i], x[d - 1]);
                break;
            }
        }
        if (dem == 1)
        {
            for (int i = 0; i < x.size(); i++)
                cout << x[i];
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}