#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    vector<int> a(m);
    if (s > m * 9 || (s == 0 && m != 1))
    {
        cout << -1 << " " << -1;
        return 0;
    }
    int dem = 0;
    while (s > 9)
    {
        a[dem++] = 9;
        s -= 9;
    }
    a[m - 1] = 1;
    a[dem] += s - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << " ";
    a[m - 1] -= 1;
    a[dem]++;
    for (int i = 0; i < m; i++)
    {
        cout << a[i];
    }
    return 0;
}