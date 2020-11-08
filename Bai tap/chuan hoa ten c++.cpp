#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string a, stoken, b[100];
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
    }
    stringstream ss(a);
    int dem = 0;
    while (ss >> stoken)
    {
        b[dem++] = stoken;
    }
    for (int i = 0; i < dem; i++)
    {
        for (int j = 0; j < b[i].length(); j++)
        {
            if (j == 0)
            {
                b[i][j] = toupper(b[i][j]);
            }
        }
    }
    for (int i = 0; i < b[dem-1].length(); i++)
    {
        b[dem-1][i] = toupper(b[dem-1][i]);
    }
    for (int i = 0; i < dem; i++)
    {
        if (i == dem - 1)
            cout << ", " << b[i];
        else if (i == dem - 2)
            cout << b[i];
        else
            cout << b[i] << " ";
    }
    return 0;
}
