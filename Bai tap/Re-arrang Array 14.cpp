#include <iostream>
using namespace std;

void nhap(long a[100][100], int n, int m)
{
   for (long i = 0; i < n; i++)
      for (long j = 0; j < m; j++)
      {
         cin >> a[i][j];
      }
}
void sapxep(long A[100][100], int d, int c)
{
   for (long i = 0; i <= d * c - 1; i++)
      for (long j = 0; j <= d * c - 1; j++)
         if (A[i / c][i % c] < A[j / c][j % c])
         {
            int tmp = A[i / c][i % c];
            A[i / c][i % c] = A[j / c][j % c];
            A[j / c][j % c] = tmp;
         }
}
void xuat(long a[100][100], int n, int m)
{
   for (long i = 0; i < n; i++)
   {
      for (long j = 0; j < m; j++)
         cout << a[i][j] << " ";
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long a[100][100], n, m;
      cin >> n >> m;
      nhap(a, n, m);
      sapxep(a, n, m);
      xuat(a, n, m);
      cout << "\n";
   }
   return 0;
}