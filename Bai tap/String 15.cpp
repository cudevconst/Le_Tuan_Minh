#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string a;
        getline(cin, a);
        int dem = 0;
        for (int i = 0; i < a.length(); i++)
        {
            dem++;
            for (int j = i + 1; j < a.length(); j++)
            {
                if (a[j] == a[i])
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}