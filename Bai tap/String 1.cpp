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
        int k;
        cin >> s >> k;
        if (s.length() < 26)
        {
            cout << 0 << endl;
            continue;
        }
        int dem = 0;
        for (long i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                continue;
            else
                dem++;
            for (long j = i + 1; j < s.length(); j++)
            {
                if (s[j] == s[i])
                    s[j] = ' ';
            }
        }
        if (dem == 26)
            cout << "1" << endl;
        else
        {
            if (26 - dem <= k)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}