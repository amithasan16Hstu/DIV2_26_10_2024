#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int INF = 1e9 + 7;
int n; 
int a[MAXN]; 

int main() {
    

    int t;
    cin >> t; 
    while(t--) {
      cin >> n;

    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int ans = INF; 
    for(int i = 1; i <= n; i++) {
        int count = 0;

        
        for(int j = i + 1; j <= n; j++) {
            if(a[j] > a[i]) {
                count++;
            }
        }

        
        ans = min(ans, count + (i - 1));
    }

   
    cout << ans << "\n";
      
    }

    return 0;
}
