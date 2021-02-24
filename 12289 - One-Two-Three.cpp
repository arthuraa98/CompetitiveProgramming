#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    string s;
    cin >> n;
    while(n--) {
    	cin >> s;
    	if (s.length() > 3) cout << "3\n";
    	else {
    		if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || s[1] == 'n' && s[2] == 'e') {
    			cout << "1\n";
    		} else {
    			cout << "2\n";
    		}
    	}
    }
return 0;
}
