#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double simpson_R(int, int, int);
void main()
{
int a, b, n;
	printf("폐구간 a,b와 등분수 n을 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &n);
	printf("함수 f(x)=3x+4를 %d과(와) %d 사이에 대하여 적분한 결과는 %.2lf입니다.\n", a, b, simpson_R(a, b, n));

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

		else if (i % 2 == 0)
			s = s + (h / 3) * (2 * (3 * xi + 4));
		else 	s = s + (h / 3) * (4 * (3 * xi + 4));

	}
	return s;
}