#include <bits/stdc++.h>
using namespace std;
void xet(string &s1, string &s2) //chuan hoa do dai 2 chuoi bang nhau
{
    int l1 = s1.length(), l2 = s2.length();
    if (l1 >= l2)
    {
        s2.insert(0, l1 - l2, '0');
    }
    else
        s1.insert(0, l2 - l1, '0');
}
string tong(string s1, string s2) //tong 2 chuoi
{
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
    return s;
}
string nhanMin(char s1, string s2) //nhan mot chuoi voi 1 so
{
    string s = "";
    int tmp = 0;
    for (int i = s2.length() - 1; i >= 0; i--)
    {
        tmp = (s1 - '0') * (s2[i] - '0') + tmp;
        s.insert(0, 1, (tmp % 10) + '0');
        tmp /= 10;
    }
    if (tmp > 0)
        s.insert(0, 1, tmp + '0');
    return s;
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
        int tmp = 0;
        string a[1000];
        for (int i = s2.length() - 1; i >= 0; i--)
        {
            a[i] = nhanMin(s2[i], s1);                            //nhan lan luot tung so voi chuo s1
            a[i].insert(a[i].length(), s2.length() - i - 1, '0'); //cong don so 0 vao cuoi
            s = tong(s, a[i]);
        }
        cout << s << endl;
    }
}