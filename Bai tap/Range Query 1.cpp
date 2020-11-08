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
        int m[a];
        for (int i = 0; i < a; i++)
        {
            cin >> m[i];
        }
        while (b--)
        {
            int s1, s2;
            cin >> s1 >> s2;
            int sum = 0;
            for (int i = s1 - 1; i < s2; i++)
            {
                sum += m[i];
            }
            cout << sum << endl;
        }
        cout << "\n";
    }
}