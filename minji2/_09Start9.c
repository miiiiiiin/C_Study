#include <stdio.h>

int main9() {
	int num1, num2, num3;
	num1 = 2;
	num2 = 153;
	//num3 = 0;
	printf("값을 입력하세요:");

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	//scanf_s("%d", &num3);

	int sum = num1 + num2;
	printf("%d\n", sum);
	int sub;
	sub = num1 - num2;
	printf("%d\n", sub);
	int mul;
	mul = num1 * num2;
	printf("%d\n", mul);
	float div;
	div = (float)num1 / (float)num2;
	printf("%f\n", div);
	int mol;
	mol = num1 % num2;
	printf("%d\n", mol);
	return 0;
}
