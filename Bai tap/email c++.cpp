#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string S, a[100], stoken;
    getline(cin, S);
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = tolower(S[i]);
    }
    stringstream ss(S);
    int dem = 0;
    while (ss >> stoken)
    {
        a[dem++] = stoken;
    }
    cout << a[dem - 1];
    for (int i = 0; i < dem - 1; i++)
    {
        for (int j = 0; j < a[i].length(); j++)
        {
            if (j == 0)
                cout << a[i][j];
        }
    }
    cout << "@ptit.edu.vn";
}