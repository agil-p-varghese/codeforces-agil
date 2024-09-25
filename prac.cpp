#include<bits/stdc++.h>
using namespace std;
int n, p[1790], u[1790];
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];

    for (int i = 1; i <= n; i++) {
        fill(u + 1, u + n + 1, 0);  // Reset array u[] in one step

        int j = i;
        while (u[j] < 1) {
            u[j]++;
            j = p[j];
        }
        cout << j << " ";
    }
}
