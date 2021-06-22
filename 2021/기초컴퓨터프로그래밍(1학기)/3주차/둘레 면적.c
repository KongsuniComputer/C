#include <stdio.h>
#include <math.h>

int main(void) {

	int w;
	int h;
	int area;
	int perimeter;

	printf("둘레 입력하거라 : ");
	scanf("%d", &perimeter);
	printf("면적 입력하거라 : ");
	scanf("%d", &area);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("둘레 : %d\n", perimeter);
	printf("면적 : %d\n", area);


	return 0;


}