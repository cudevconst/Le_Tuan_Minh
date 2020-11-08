#include <iostream>
#include <string>
using namespace std;
void xet(string &s1, string &s2)
{
    int l1 = s1.length(), l2 = s2.length();
    if (l1 >= l2)
    {
        s2.insert(0, l1 - l2, '0');
    }
    else
        s1.insert(0, l2 - l1, '0');
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string s = "";
        xet(s1, s2);
        int tmp = 0;
        for (int i = s1.length() - 1; i >= 0; i--)
        {
            tmp = s1[i] - '0' + s2[i] - '0' + tmp;
            s.insert(0, 1, tmp % 10 + '0');
            tmp /= 10;
        }
        if (tmp > 0)
        {
            s.insert(0, 1, tmp + '0');
        }
        cout << s << endl;
    }
    return 0;
}
