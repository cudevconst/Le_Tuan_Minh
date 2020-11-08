#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dem = 0;
        for (int i = 0; i < b; i++)
        {
            if (a * i % b == 1)
            {
                cout << i << endl;
                dem++;
                break;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
    }
    return 0;
}