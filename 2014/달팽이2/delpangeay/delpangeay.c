#include <stdio.h>

int main()
{
	int height;
	int days;

	height=0;
	days=0;

	height = height + 55;

	while(height < 300) {
		height = height - 13;
		days = days + 1;
		height = height + 55;
	}

	printf("��ĥ�ɷȽ��ϱ�?\n");
	printf("%d���Դϴ�. \n", days);
	return 0;
}