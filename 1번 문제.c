#include <stdio.h>

int main()
{
	int second, hour, minute, remaining;
	printf("�� ������ �ð��� �Է� �Ͻÿ� -->          (��)\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%d", &second);
	hour = second / 3600;
	minute = (second - hour * 3600) / 60;
	remaining = second % 60;
	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.", second, hour, minute, remaining);


	return 0;
}