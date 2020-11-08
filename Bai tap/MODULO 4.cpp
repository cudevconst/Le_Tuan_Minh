#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long sum = 0;
        for (int i = 1; i <= a; i++)
        {
            sum += i % b;
        }
        if (sum == b)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}