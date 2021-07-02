#include <iostream>
#include <vector>
int ddeok;
std::vector<int> pibo(int day, int first, int second) {
	if (day == 3 && first <= second) {
		std::vector<int> vec = { first, second };
		return vec;
	}
	if (first <= second) {
		return pibo(day - 1, second - first, first);
	}
	return {};
}
int main() {
	int day;
	std::cin >> day >> ddeok;
	std::vector<int> arr = {};
	int first = ddeok / 2, second;
	do {
		second = ddeok - first;
		arr = pibo(day, first, second);
		first -= 1;
	} while (arr.size() == 0);


	std::cout << arr[0] << '\n' << arr[1];
}