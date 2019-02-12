#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
typedef int boolean;
#define true 1
#define false 0
#define T int
#define maxLen 1000
#define maxSize 2
T Stack[maxLen];
int cursor = -1;

////1
//boolean push(T data) {
//	if (cursor < maxLen && data > 0) {
//		Stack[++cursor] = data % 2;
//		push(data / 2);
//		return true;
//	}
//	return false;
//}
//
//void pop(char* b) {
//	if (cursor != -1) {
//		strcat(b, (Stack[cursor--] % 2) ? "1" : "0");
//		pop(b);
//	}
//}
//
//
////2 Не догадался как можно реализовать через stack
////Не дорешал, функция не работает.
//
////boolean checkExpression(char expression[]) {
////	char first[maxSize];
////	char second[maxSize];
////	
////	for (int i = 0; i < maxSize; i++) {
////		if (expression[i] == '{' || expression[i] == '(' || expression[i] == '[') {
////			strcat(first, &expression[i]);
////		}
////		else if (expression[i] == '}' || expression[i] == ')' || expression[i] == ']') {
////			strcat(second, &expression[i]);
////		}
////	}
////	
////	for (int i = 0; i < maxSize; i++){
////		if (first[i] == '{' && second[maxSize-i-1] == '}') continue;
////		else if (first[i] == '(' && second[maxSize - i - 1] == ')') continue;
////		else if (first[i] == '[' && second[maxSize - i - 1] == ']') continue;
////		else return false;
////	}
////	return true;
////}
//
//int main() {
//	setlocale(LC_ALL, "Rus");
//	
//	char binary[64] = { "b'" };
//	push(25);
//	pop(binary);
//	printf(binary);
//	/*char expression[maxSize] = "()";
//	printf("%d", checkExpression(expression));*/
//	_getch();
//	return 0;
//}