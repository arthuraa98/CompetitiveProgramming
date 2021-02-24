#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);

    float H, U, D, F;
    while(cin >> H >> U >> D >> F && H != 0) {
    	float initHeight = 0.0, afterClimbing = 0.0, distClimbed, afterSliding;
    	int day = 1;
    	while(afterClimbing <= H) {
    		distClimbed =  U - (U * F/100 * (day - 1));
    		if (distClimbed > 0.0)  {
    			afterClimbing = distClimbed + initHeight;
    			afterSliding = afterClimbing - D;
    			initHeight = afterSliding;
    		}    		
    		else {
    			afterClimbing = initHeight;
    			afterSliding = afterClimbing - D;
    			initHeight = afterSliding;
			}
			if (afterClimbing > H) {
				cout << "success on day " << day << "\n";
				break;
			}
    		if (initHeight < 0) {
    			cout << "failure on day " << day << "\n";
    			break;
    		}
    		day++;
    	}
    }
return 0;
}
