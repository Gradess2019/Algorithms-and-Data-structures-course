//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <conio.h>
//#include <time.h>
////�� ����� ������� ��, �� ������� �������. �� ������� ����� �� �������� :)
//
////1 
//int firstObstacleX = 2, firstObstacleY = 2; //�����������
//int routes(int x, int y) {
//	if (x == 0 && y == 0)
//		return 0;
//	else if (x == 0 ^ y == 0)
//		return 1;
//	else if (x != firstObstacleX && y != firstObstacleY)
//		return routes(x, y - 1) + routes(x - 1, y);
//	//else if (x == firstObstacleX) return routes(x, y - 1);
//	//else if (y == firstObstacleY) return routes(x - 1, y);
//	//else return 1
//}
//
//int main() {
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%3d ", routes(j, i));
//		}
//		printf("\n");
//	}
//	_getch();
//	return 0;
//}