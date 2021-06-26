#include <vector>
#include <iostream>
#include <string>
class stackdata {
	std::vector<int> intdata;
	int cnt = 0;
public:
	void push(int x) {
		intdata.push_back(x);
		cnt++;
	}
	void size() {
		std::cout << cnt << std::endl;
	}
	void pop() {
		if (cnt == 0) std::cout << -1 << std::endl;
		else {
			std::cout << intdata[cnt - 1] << std::endl;
			intdata.pop_back();
			cnt--;
		}
	}
	void empty() {
		if (cnt == 0) std::cout << 1 << std::endl;
		else { std::cout << 0 << std::endl; }
	}
	void top() {
		if (cnt == 0) std::cout << -1 << std::endl;
		else {
			std::cout << intdata[cnt - 1] << std::endl;
		}
	}
};

int main() {
	stackdata d1;
	int size;
	std::cin >> size;
	std::string command;
	int num;
	for (int i = 0; i < size; i++) {
		std::cin >> command;

		if (command == "push") {
			std::cin >> num;
			d1.push(num);
		}
		else if (command == "size") {
			d1.size();
		}
		else if (command == "pop") { d1.pop(); }
		else if (command == "empty") { d1.empty(); }
		else if (command == "top") { d1.top(); }

	}
}