//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <conio.h>
//#include <string.h>
//
////1
//int hash(char* str) {
//	int result = 0;
//	if ((int)strlen(str) == 0) return -1;
//	for (int i = 0; i < (int)strlen(str); i++) result += str[i];
//	return result;
//}
//
//
//#define T int
//
//typedef struct Node {
//	T data;
//	struct Node* left;
//	struct Node* right;
//	struct Node* parent;
//} Node;
//
//Node* tree(int n) {
//	Node* newNode;
//	int value;
//	int nL;
//	int nR;
//	if (n == 0)
//		newNode = NULL;
//	else {
//		scanf("%d", &value);
//		nL = n / 2;
//		nR = n - nL - 1;
//		newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = value;
//		newNode->left = tree(nL);
//		newNode->right = tree(nR);
//	}
//	return newNode;
//}
//
//void preOrderTravers(Node* root) {
//	if (root) {
//		printf("%d ", root->data);
//		preOrderTravers(root->left);
//		preOrderTravers(root->right);
//	}
//}
//
////2 à)
//void inOrderTravers(Node* root) {
//	if (root) {
//		inOrderTravers(root->left);
//		printf("%d ", root->data);
//		inOrderTravers(root->right);
//	}
//}
//
//void postOrderTravers(Node* root) {
//	if (root) {
//		postOrderTravers(root->left);
//		postOrderTravers(root->right);
//		printf("%d ", root->data);
//	}
//}
////2 á)
//Node* binarySearch(Node* root, T searchData) {
//	if (root) {
//		if (searchData == root->data) return root;
//		else if (searchData < root->data) return binarySearch(root->left, searchData);
//		else return binarySearch(root->right, searchData);
//	}
//	else return NULL;
//}
//
//
//int main() {
//
//	printf("%d", hash("Hello World!!!"));
//	_getch();
//	return 0;
//}