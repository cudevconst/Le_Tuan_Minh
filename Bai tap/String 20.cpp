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
        string stoken, S, a[1000];
        getline(cin, S);
        stringstream ss(S);
        int dem = 0;
        while (ss >> stoken)
        {
            a[dem++] = stoken;
        }
        for (int i = dem - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}