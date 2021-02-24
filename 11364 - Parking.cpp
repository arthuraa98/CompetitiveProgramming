#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x;
    cin >> t;
    while(t--) {
    	int max = 0, min = 99;
    	cin >> n;
    	while(n--) {
    		cin >> x;
    		max = (x > max) ? x : max;
    		min = (x < min) ? x : min;
    	}
    	cout << 2 * (max - min) << "\n";
    }
    
return 0;
}
