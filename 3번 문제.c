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
	{	case 'P' : printf("\n 파운드 입력 : ");
		scanf("%d", &pound);
		kg = pound * 0.4535;
		printf("\n %d 파운드는 %.2lfkg이다,\n\n", pound, kg);
		break;
	case 'k': printf("\n 킬로그램 입력 : ");
		scanf("%lf", &kg);
		printf("\n%.1lfkg은 %.1lf pound이다.\n\n", kg, kg/0.4535);
		break;
	default: printf(" 잘못된 명령입니다.\n\n");
	}


}