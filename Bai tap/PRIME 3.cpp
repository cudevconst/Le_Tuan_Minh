#include <iostream>
#include <cmath>
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
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (ngto(i))
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}