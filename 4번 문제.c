#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
void main()
{
	double a, b, c, x1, x2, D;

	printf("각 항의 계수 (a, b)와 상수  c의 값 입력: "); 
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\n 해를 확인하려면 임의의 키를 누르세요\n");
	_getch();
	system("cls");

	D = pow(b, 2) - 4 * a * c;
	x1 = ( - b + sqrt(D))/2*a;
	x2 = ( - b - sqrt(D))/2*a;

	if (D < 0)
	{
		printf("'허근'을 가짐 \n ");
	}
	else if (D == 0)
	{
		printf("'중근'을 가짐 \n ");
		printf("x=%.1lf \n", x1);

	}
	else
	{
		printf("'실근'을 가짐\n");
		printf("x1=%.1lf  x2=%.1lf", x1, x2);
	}
}