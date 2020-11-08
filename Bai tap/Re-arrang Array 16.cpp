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
        int n = s.length();
        int dem = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            int max = 0, k;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] > max && s[j] < s[i])
                {
                    max = s[j];
                    k = j;
                    dem++;
                }
            }
            if (max)
            {
                swap(s[i], s[k]);
                cout << s << endl;
                break;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
    }
    return 0;
}