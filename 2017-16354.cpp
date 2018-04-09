#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	std::vector<int> NumberList;

	auto num = 0;

	while (cin >> num) {
		NumberList.push_back(num);
	}
	
	std::sort(NumberList.rbegin(), NumberList.rend());
		cout << endl;
		cout << "ordered array" << endl;

	for (auto i : NumberList) {
		cout << i << " ";
		
	}

	cout << endl;
	system("pause");

	
}