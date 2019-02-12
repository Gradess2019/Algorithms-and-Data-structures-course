#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

//1
FILE *f;

void printMatrix(FILE *f, const int size) {
	char value;
	char nodes[10];//Здесь конфликтует MVS и не даёт создать переменную nodes[size];
	int i = 0;
	int j = 0;
	while (!feof(f))
	{
		fscanf(f, "%c", &value);
		if (value != '\n' && value >= 65) {
			nodes[i] = value;
			i++;
		}
		else if (48 <= value && value <= 57) {
			if (j == i || j == 0)
			{
				j = 0;
				printf("\n");
			}
			j++;
		}
		printf("%c", value);
	}
}


typedef struct Stack {
	int size;
	struct GraphNode* head;
} Stack;

typedef struct GraphNode {
	int data;
	int index;
	int used;
	struct GraphNode* next;
	struct GraphNode* prev;
	struct Stack children;
} GraphNode;

typedef int T;

T popS(Stack* lst) {
	if (lst->size <= 0) {
		puts("Stack is Empty");
		return -1;
	}
	GraphNode* tmp = NULL;
	T value = lst->head->data;
	tmp = lst->head;
	lst->head = lst->head->next;
	if (lst->size > 1)
		lst->head->prev = NULL;
	free(tmp);
	lst->size--;
	return value;
}


//2
void toDeep(GraphNode* node) {
	if (node->used == 1) toDeep(node->prev);
	while (node->children.size != 0)
	{
		
	}
}

int main() {
	f = fopen("text.txt", "r");
	printMatrix(f, 10);
	_getch();
	return 0;
}