#include <stdio.h>
#include <math.h>

int main(void) {

	int w;
	int h;
	int area;
	int perimeter;

	printf("�ѷ� �Է��ϰŶ� : ");
	scanf("%d", &perimeter);
	printf("���� �Է��ϰŶ� : ");
	scanf("%d", &area);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�ѷ� : %d\n", perimeter);
	printf("���� : %d\n", area);


	return 0;


}