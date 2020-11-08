#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long dem, a[100];
        long MAX = 0, xet;
        long k, h;
        for (long i = 0; i < s1.length(); i++)
        {
            xet = 0;
            memset(a, false, sizeof(a));
            for (long t = 0; t < s2.length(); t++)
            {
                if (a[s2[t] - 'a'])
                {
                    a[s2[t] - 'a'] == true;
                    xet++;
                }
            }
            if (a[s1[i] - 'a'] == true)
            {
                dem = 1;
                a[s1[i] - 'a'] = false;
            }
            for (long j = i + 1; j < s1.length(); j++)
            {
                if (a[s1[j] - 'a'] == true)
                {
                    dem++;
                    a[s1[j] - 'a'] = false;
                }
                if (dem == xet)
                {
                    MAX = max(j - i, MAX);
                    k = i;
                    h = j;
                }
            }
        }
        for (long i = k; i <= h; i++)
        {
            cout << s1[i];
        }
    }
}