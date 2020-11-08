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
        string a, stoken;
        getline(cin, a);
        stringstream ss(a);
        int dem = 0;
        while (ss >> stoken)
        {
            dem++;
        }
        cout << dem << endl;
    }
    return 0;
}