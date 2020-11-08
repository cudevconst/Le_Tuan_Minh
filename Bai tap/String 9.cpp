#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long MAX = 0;
        long sum = 0;
        for (int i = 0; i < s.length() + 1; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                sum = sum * 10 + s[i] - '0';
            }
            else
            {
                MAX = max(MAX, sum);
                sum = 0;
            }
        }
        cout << MAX << endl;
    }
    return 0;
}