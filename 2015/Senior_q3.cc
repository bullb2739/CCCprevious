// 2015/s3 

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int g, p, num = 0;
	
	cin >> g;
	cin >> p;
	
	vector<bool> arr(g);

	for (int x = 0; x < p; x++) {
		int y; //input gate #
		cin >> y; //input desired gate
		y--; //adjust to array position
		
		while (true) {
			if (arr[y] == false) { //no plane there yet
				arr[y] = true; //place plane there 
				num ++; //one more plane placed
				break;
			}
			
			else {
				y--; //reduce gate number by one
				if (y<0) { // if num is now less than 0 do end bits and leave
					cout << num << endl;
					return 0;
				}
			
			}
		}
		
	}
	
	cout << num << endl;
		
	return 0;
}
