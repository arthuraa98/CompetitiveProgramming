#include <bits/stdc++.h>

using namespace std;

vector<string> Split(const string& subject) {
    istringstream ss{subject};
    using StrIt = istream_iterator<string>;
    vector<string> container{StrIt{ss}, StrIt{}};
    return container;
}
int main() {
    std::ios_base::sync_with_stdio(false);

    int TC;
    cin >> TC;
    string s;
    vector<string> vs;
    cin.ignore();
    while (TC--) { 	
    	getline(cin, s);
    	vs = Split(s);

    	if ((count(vs.begin(), vs.end(), "FF") == count(vs.begin(), vs.end(), "MM")) && vs.size() > 1) {
    		cout << "LOOP" << "\n";
    	}
    	else cout << "NO LOOP" << "\n";
    }
return 0;
}
