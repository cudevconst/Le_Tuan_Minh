#include <iostream>
using namespace std;
int ngto(int n)
{
    if (n < 2)
        return 0;
    int dem = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem == 0;
}
int ucln(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 1; i < n; i++)
        {
            if (ucln(i, n) == 1)
                dem++;
        }
        if (ngto(dem))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}