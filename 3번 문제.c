#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> /*sexy junyeong*/
#define MSG "\n--------------------------------\n"
#define gyeongsook "p)pound->kg, k)kg->pound?(  ) \b\b\b\b"
void main()
{
	int pound; double kg; char ch;
	printf("%s", MSG);
	printf("%s", gyeongsook);
	ch = getchar();
	printf("%s", MSG);
	switch (toupper(ch))
	{	case 'P' : printf("\n �Ŀ�� �Է� : ");
		scanf("%d", &pound);
		kg = pound * 0.4535;
		printf("\n %d �Ŀ��� %.2lfkg�̴�,\n\n", pound, kg);
		break;
	case 'k': printf("\n ų�α׷� �Է� : ");
		scanf("%lf", &kg);
		printf("\n%.1lfkg�� %.1lf pound�̴�.\n\n", kg, kg/0.4535);
		break;
	default: printf(" �߸��� ����Դϴ�.\n\n");
	}


}