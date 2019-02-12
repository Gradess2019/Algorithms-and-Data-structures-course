#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

//Выполнено в Microsoft Visual Studio

//1
int toBinary(int decimalNumer) {
	return (decimalNumer > 0) ? toBinary(decimalNumer / 2) * 10 + (decimalNumer % 2) : 0;
}

//2
int power(int number, int powerNumber) {
	return (powerNumber == 0) ? 1 : number * power(number, powerNumber - 1); 
}

//int main() {
//	setlocale(LC_ALL, "Rus");
//	int x = 100;
//	int binary = toBinary(x);
//
//	printf("%d\n", binary);
//
//	x = 5;
//	int p = 3;
//	printf("%d\n", power(x, p));
//	_getch();
//	return 0;
//}
