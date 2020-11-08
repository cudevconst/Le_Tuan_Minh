#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
void tao(string s, string a[100], int dem)
{
    string stoken;
    stringstream ss(s);
    while (ss >> stoken)
    {
        a[dem++] = stoken;
    }
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string a1[100], a2[100];
        int dem1 = 0, dem2 = 0;
        tao(s1, a1, dem1);
        tao(s2, a2, dem2);
        string k = " ";
        for (int i = 0; i < dem2; i++)
        {
            for (int j = 0; j < dem1; j++)
            {
                if (a2[i] == a1[j])
                {
                    a1[j].erase(0);
                    a1[j] = k;
                }
            }
        }
        for (int i = 0; i < dem1; i++)
        {
            cout << a1[i] << " ";
        }
        for (int i = 0; i < dem1 - 1; i++)
        {
            if (a1[i].compare(k) == 0)
                continue;
            for (int j = i + 1; j < dem1; j++)
            {
                if (a1[i][0] > a1[j][0])
                    a1[i].swap(a1[j]);
            }
        }
        for (int i = 0; i < dem1; i++)
        {
            if (a1[i].compare(k) == 0)
                continue;
            else
                cout << a1[i] << " ";
        }
    }
}