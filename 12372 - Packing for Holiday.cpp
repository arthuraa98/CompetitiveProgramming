#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T, n;
    cin >> T;
    n = T;
    while(T--) {
    	int L, W, H;
    	cin >> L >> W >> H;
    	cout << "Case " << n-T << ": ";
    	if (L <= 20 && W <= 20 && H <= 20) cout << "good\n";
    	else cout << "bad\n";
    }

return 0;
}
