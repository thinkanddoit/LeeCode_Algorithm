#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> nums;
	vector<int> nums_v2(4);

	nums = { 1, 2, 3, 4 };
	
	for (int i = 0;i < nums.size();i++) {
		for (int j = 0;j < i+1;j++) {
			nums_v2[i] += nums[j];
		}
		cout << nums_v2[i] << endl;
	}

}

