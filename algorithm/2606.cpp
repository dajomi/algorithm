#include <iostream>
#include <vector>
std::vector<int> a[100];
int cnt = 0;
void dfs(int start, int* visit) {
	if (visit[start]==true) {
		return;
	}
	visit[start] = true;
	cnt += 1;
	for (int i = 0; i < a[start].size(); i++) {
		int x = a[start][i];
		dfs(x, visit);
	}
}
int main() {
	int numofcom, numofnet, com1, com2;
	std::cin >> numofcom >> numofnet;	
	int* visit = new int[numofcom];
	for (int i = 0; i < numofnet; i++)
	{
		std::cin >> com1 >> com2;
		a[com1].push_back(com2);
		a[com2].push_back(com1);
	}
	dfs(1, visit);
	std::cout << cnt-1;
}