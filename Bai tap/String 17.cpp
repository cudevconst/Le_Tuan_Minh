#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string S;
        getline(cin, S);
        for (int i = 0; i < S.length() - 1; i++)
        {
            int dem = 0;
            if (S[i] == ' ')
                continue;
            for (int j = i + 1; j < S.length(); j++)
            {
                if (S[j] == S[i])
                {
                    S[j] = ' ';
                    dem++;
                }
            }
            if (dem > 0)
                S[i] = ' ';
        }
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == ' ')
                continue;
            else
                cout << S[i];
        }
        cout << endl;
    }
    return 0;
}