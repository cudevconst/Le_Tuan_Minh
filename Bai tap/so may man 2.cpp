#include <bits/stdc++.h>
using namespace std;
string s;
void xet()
{
    long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    long xet;
    while (sum >= 10)
    {
        xet = 0;
        while (sum > 0)
        {
            xet += sum % 10;
            sum /= 10;
        }
        sum = xet;
    }
    if (sum == 9)
        cout << "1" << endl;
    else
        cout << "0" << endl;
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
    }
}