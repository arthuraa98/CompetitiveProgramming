#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, n;
    std::cin >> t;
    while(t--) {
    	int ans;
    	std::cin >> n;
    	ans = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
    	std::cout << abs((ans / 10) % 10) << "\n";   
    }
    
return 0;
}
