#include <iostream>

long int get_gcd(long int a, long int b) {
	if (b == 0) return a;
	return get_gcd(b, a%b);
}

int main() {
	int testcase;
	std::cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		long int number1, number2;
		std::cin >> number1 >> number2;
		long int gcd = get_gcd(number1, number2);
		std::cout << number1 * number2 / gcd << std::endl;
	}
}