#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
void main()
{
	double a, b, c, x1, x2, D;

	printf("�� ���� ��� (a, b)�� ���  c�� �� �Է�: "); 
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\n �ظ� Ȯ���Ϸ��� ������ Ű�� ��������\n");
	_getch();
	system("cls");

	D = pow(b, 2) - 4 * a * c;
	x1 = ( - b + sqrt(D))/2*a;
	x2 = ( - b - sqrt(D))/2*a;

	if (D < 0)
	{
		printf("'���'�� ���� \n ");
	}
	else if (D == 0)
	{
		printf("'�߱�'�� ���� \n ");
		printf("x=%.1lf \n", x1);

	}
	else
	{
		printf("'�Ǳ�'�� ����\n");
		printf("x1=%.1lf  x2=%.1lf", x1, x2);
	}
}