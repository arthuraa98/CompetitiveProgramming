#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::map<std::string, int> mapStringValues;
	mapStringValues.insert({"HELLO", 1});
	mapStringValues.insert({"HOLA", 2});
	mapStringValues.insert({"HALLO", 3});
	mapStringValues.insert({"BONJOUR", 4});
	mapStringValues.insert({"CIAO", 5});
	mapStringValues.insert({"ZDRAVSTVUJTE", 6});

	int c = 1;
    std::string s;
    std::cin >> s;

    while(s != "#") {
    	std::cout << "Case " << c++; 

    	switch (mapStringValues[s]) {
    		case 1:
    			std::cout << ": ENGLISH" << "\n";
    			break;
    		case 2:
    			std::cout << ": SPANISH" << "\n";    		
    			break;
    		case 3:
    			std::cout << ": GERMAN" << "\n";    		
    			break;
    		case 4:
    			std::cout << ": FRENCH" << "\n";    		
    			break;
    		case 5:
    			std::cout << ": ITALIAN" << "\n";    		
    			break;
    		case 6:
    			std::cout << ": RUSSIAN" << "\n";    		
    			break;
    		default:
    			std::cout << ": UNKNOWN" << "\n";
    			break;
    	}
    	std::cin >> s;
    }
    
return 0;
}
