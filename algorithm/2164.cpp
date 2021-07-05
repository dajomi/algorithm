#include <iostream>
#include <queue>
    

int main() {
    int numofnumber;
    std::cin >> numofnumber;
    std::queue<int> q;
    for (int i = 0; i < numofnumber; i++) {
        q.push(i + 1);
    }
    while (q.size() > 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    std::cout << q.front();
}