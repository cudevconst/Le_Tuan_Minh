#include <iostream>
#include <string>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = 0;
        ll sum = 0;
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                if (k == 0)
                    sum += 2;
                if (k == 1)
                    sum += 4;
                if (k == 2)
                    sum += 8;
                if (k == 3)
                    sum += 6;
            }
            k++;
            if (k == 4)
                k = 0;
        }
        if (sum % 5 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}