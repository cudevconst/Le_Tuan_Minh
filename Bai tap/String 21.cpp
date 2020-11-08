#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        int sum = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                sum += s[i] - '0';
                s.erase(s.begin() + i);
                i--;
            }
        }
        sort(s.begin(), s.end());
        cout << s;
        cout << sum << endl;
    }
    return 0;
}
