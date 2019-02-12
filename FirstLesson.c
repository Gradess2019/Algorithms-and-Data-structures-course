#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//1
float bodyMassIndex(float weight, float height) {
	return weight / (height*height);
}

//2
void swapNumbers(int* firstNumber, int* secondNumber) {
	*firstNumber ^= *secondNumber;
	*secondNumber ^= *firstNumber;
	*firstNumber ^= *secondNumber;
}

//3
void findRoots(float a, float b, float c, float *firstRoot, float *secondRoot) {
	float discriminant = b * b - 4 * a * c;
	if (discriminant < 0) return;
	discriminant = sqrtf(discriminant);	
	*firstRoot = (-b + discriminant) / (2 * a);
	*secondRoot = (-b - discriminant) / (2 * a);
}

//4
void findSeason(int month) {
	if (month < 1 && month > 12) return;
	if (month < 3 || month == 12) printf("It is winter\n");
	else if (month >= 3 && month < 6) printf("It is spring\n");
	else if (month >= 6 && month < 9) printf("It is SUMMER!!!\n");
	else if (month >= 9 && month < 12) printf("It is autumn\n");
}

//5
void printAge(int age) {
	printf("%d ", age);
	int lastNumber = age % 10;
	if (age >= 11 && age <= 19 || age >= 111 && age <= 119) printf("лет\n");
	else if (lastNumber == 1) printf("год\n");
	else if (lastNumber >= 2 && lastNumber <= 4) printf("года\n");
	else if (lastNumber >= 5 && lastNumber <= 9 || lastNumber == 0) printf("лет\n");
}

//6
int ChessBoard[8][8];
int isEqualColor(int x1, int y1, int x2, int y2){
	if (x1 < 1 || y1 < 0 || x2 < 0 || y2 < 0 ||
		x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8) return 0;
	if (ChessBoard[y1-1][x1-1] == ChessBoard[y2-1][x2-1]) return 1;
	return 0;
}

//7
void division(int n, int k) {
	if (k == 0) return;
	int quotient = 0, isNegative = 0;
	if (n > 0 && k < 0 || n < 0 && k > 0) isNegative = 1;
	n = abs(n);
	k = abs(k);
	while (n >= k){
		n -= k;
		quotient++;
	}
	if (isNegative) quotient = -quotient;
	printf("Частное: %d\nОстаток: %d\n", quotient, n);
}

int hasOddNumber(int N) {
	while (N > 0)
	{
		int temp = N % 10;
		if (temp % 2 != 0) return 1;
		N /= 10;
	}
	return 0;
}

//int main() {
//	setlocale(LC_ALL, "Rus");
//
//
//	//Initialize Chess Board
//	for (int y = 0; y < 8; y++)
//	{
//		for (int x = 0; x < 8; x++)
//		{
//			if (y % 2 == 0) {
//				if (x % 2 != 0) ChessBoard[y][x] = 1;
//			} else if (y % 2 != 0){
//				if (x % 2 == 0) ChessBoard[y][x] = 1;
//			}
//		}
//	}
//
//	//1
//	float weight, height;
//	printf("1. Please, enter weight and height: ");
//	scanf_s("%f %f", &weight, &height);
//	printf("Body mass index is %f\n", bodyMassIndex(weight, height));
//
//	//2
//	
//	int first = 0;
//	int second = 0;
//	printf("2. Please, enter first number and second number for swap: ");
//	scanf_s("%d %d", &first, &second);
//	swapNumbers(&first, &second);
//	printf("%d %d\n", first, second);
//
//	//3
//	float fRoot = 0.0f, sRoot = 0.0f, a = 0.0f, b = 0.0f, c = 0.0f;
//	printf("3. Please, enter \"a\", \"b\" and \"c\" of equation: ");
//	scanf_s("%f %f %f", &a, &b, &c);
//	findRoots(a, b, c, &fRoot, &sRoot);
//	printf("The first root: %.2f\nThe second root: %.2f\n", fRoot, sRoot);
//
//	//4
//	printf("4. Please, enter a month number: ");
//	int monthNum = 0;
//	scanf_s("%d", &monthNum);
//	findSeason(monthNum);
//
//	//5
//	printf("5. Please, enter age: ");
//	int age = 0;
//	scanf_s("%d", &age);
//	printAge(age);
//
//	//6
//	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//	printf("6. Please, enter x1, y1 and x2, y2: ");
//	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
//	if (isEqualColor(x1, y1, x2, y2)) printf("true\n");
//	else printf("false\n");
//
//	//7
//	int disible = 0; int divisor = 1;
//	printf("7. Please, enter divisible and divisor: ");
//	scanf_s("%d %d", &disible, &divisor);
//	division(disible, divisor);
//
//	//8
//	int num = 0;
//	printf("8. Please, enter number: ");
//	scanf_s("%d", &num);
//	if (hasOddNumber(num)) printf("true\n");
//	else printf("false\n");
//
//	_getch();
//	return 0;
//}

