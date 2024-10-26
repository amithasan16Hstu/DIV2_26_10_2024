#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
int w[MAX], h[MAX];

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int n;
      cin >> n;

      for (int i = 1; i <= n; i++)
      {
         cin >> w[i] >> h[i];
      }


      cout << 2 * ((*max_element(w + 1, w + n + 1)) + (*max_element(h + 1, h + n + 1))) << endl;
   }

   return 0;
}
