#include <bits/stdc++.h>
using namespace std;
int dem = 0;
string s;
void xet()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
        {
            dem += 3;
            s.erase(i, 3);
            xet();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        cin >> s;
        xet();
        cout << dem << endl;
    }
}