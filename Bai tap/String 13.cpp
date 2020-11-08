
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        int k, dem, a[100];
        cin >> k;
        int xet = 0;
        for (int i = 0; i < s.length(); i++)
        {
            memset(a, 0, sizeof(a));
            dem = 0;
            for (int j = i; j < s.length(); j++)
            {
                if (a[s[j] - 'a'] == 0)
                {
                    dem++;
                }
                a[s[j] - 'a']++;
                if (dem == k)
                    xet++;
                else if (dem > k)
                {
                    break;
                }
            }
        }
        cout << xet << endl;
    }
}