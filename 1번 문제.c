#include <stdio.h>

int main()
{
	int second, hour, minute, remaining;
	printf("초 단위의 시간을 입력 하시오 -->          (초)\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%d", &second);
	hour = second / 3600;
	minute = (second - hour * 3600) / 60;
	remaining = second % 60;
	printf("%d초는 %d시간 %d분 %d초입니다.", second, hour, minute, remaining);


	return 0;
}