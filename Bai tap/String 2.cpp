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
        string s;
        cin >> s;
        long long dem = 0;
        for (long long i = 0; i < s.length(); i++)
        {
            int a = s[i] - '0';
            if (i % 2 == 0)
                dem = dem + a;
            else
                dem = dem - a;
        }
        if (dem % 11 == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}