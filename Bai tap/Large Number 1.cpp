#include <bits/stdc++.h>
using namespace std;
void xet(string &s1, string &s2)
{
    int l1 = s1.length(), l2 = s2.length();
    if (l1 > l2)
    {
        s2.insert(0, l1 - l2, '0');
    }
    else if (l2 > l1)
    {
        s1.insert(0, l2 - l1, '0');
        swap(s1, s2);
    }
    else if (l1 == l2)
    {
        if (s1[0] < s2[0])
            swap(s1, s2);
    }
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
        int x, tmp = 0;
        for (int i = s1.length() - 1; i >= 0; i--)
        {
            if (tmp == 10)
            {
                s1[i] -= 1;
                tmp = 0;
            }
            if (s1[i] < s2[i])
            {
                tmp = 10;
                x = tmp + (s1[i] - '0') - (s2[i] - '0');
                s.insert(0, 1, x + '0');
            }
            else
            {
                x = (s1[i] - '0') - (s2[i] - '0');
                s.insert(0, 1, x + '0');
            }
        }
        cout << s << endl;
    }
}
