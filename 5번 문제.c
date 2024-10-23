#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double simpson_R(int, int, int);
void main()
{
int a, b, n;
	printf("�󱸰� a,b�� ��м� n�� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &n);
	printf("�Լ� f(x)=3x+4�� %d��(��) %d ���̿� ���Ͽ� ������ ����� %.2lf�Դϴ�.\n", a, b, simpson_R(a, b, n));

}

double simpson_R(int a, int b, int n)
{
	double xi, h, s = 0; int i;
	
	h = (double)(b-a) / n;
	for (i = 0; i <= n; i++)
	{
		xi = a + h * i;
		if (i == 0 || i == n)
			s = s + (h / 3) * (3 * xi + 4);

		else if (i % 2 == 1)
			s = s + (h / 3) * (2 * (3 * xi + 4));
		else 	s = s + (h / 3) * (4 * (3 * xi + 4));

	}
	return s;
}