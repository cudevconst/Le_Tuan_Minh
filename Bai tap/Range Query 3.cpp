#include <bits/stdc++.h>
using namespace std;
int ngto(int n)
{
    if (n < 2)
        return 0;
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem == 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dem = 0;
        if (a > b)
            swap(a, b);
        for (int i = a; i <= b; i++)
        {
            if (ngto(i) == 1)
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}