#include <iostream>
using namespace std;
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
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < ucln(b, c); i++)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}