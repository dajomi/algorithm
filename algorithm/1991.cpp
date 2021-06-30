#include <iostream>

struct Node {
	Node* leftp = nullptr;
	Node* rightp = nullptr;
	char route = NULL;
	Node(char route, char left, char right) :route(route) {
		if (left != '.') this->leftp = new Node(left, '.', '.');
		if (right != '.') this->rightp = new Node(right, '.', '.');
	}
};


void findNodeAndAddNode(Node* root_node, Node* patch_node) {
	if (patch_node->leftp == nullptr && patch_node->rightp == nullptr) return;

	if (root_node->leftp != nullptr) {
		if (root_node->leftp->route == patch_node->route) {
			root_node->leftp = patch_node;
			return;
		}
	}
	
	if (root_node->rightp != nullptr) {
		if (root_node->rightp->route == patch_node->route) {
			root_node->rightp = patch_node;
			return;
		}
	}
	if (root_node->leftp != nullptr) {
		findNodeAndAddNode(root_node->leftp, patch_node);
	}
	if (root_node->rightp != nullptr) {
		findNodeAndAddNode(root_node->rightp, patch_node);
	}
}
void preorder(Node* node) {
	std::cout << node->route << ' ';
	if (node->leftp!= nullptr) preorder(node->leftp);
	if (node->rightp != nullptr) preorder(node->rightp);
}
void inorder(Node* node) {
	if (node->leftp != nullptr) inorder(node->leftp);
	std::cout << node->route << ' ';
	if (node->rightp != nullptr) inorder(node->rightp);
}
void postorder(Node* node) {
	if (node->leftp != nullptr) postorder(node->leftp);
	if (node->rightp != nullptr) postorder(node->rightp);
	std::cout << node->route << ' ';
}

Node* route_node;

int main() {
	int numofnode;
	char route, left, right;
	std::cin >> numofnode;
	for (int i = 0; i < numofnode; i++) {
		std::cin >> route >> left >> right;
		if (i == 0) {
			route_node = new Node(route, left, right);
		}
		else {
			Node* n = new Node(route, left, right);
			findNodeAndAddNode(route_node, n);
		}
	}
	preorder(route_node);
	std::cout << std::endl;
	inorder(route_node);
	std::cout << std::endl;
	postorder(route_node);
}
