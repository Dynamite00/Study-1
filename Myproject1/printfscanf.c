#include <stdio.h>
int main(void) {
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/


	// 실수형 변수에 대한 예제
	/*float f = 46.5;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/
	
	// 상수 예제
	// const int YEAR = 2000; 
	// printf("태어난 년도 : %d\n", YEAR);
	// YEAR = 2001;
	
	// print (연산)
	// int add = 3 + 7; // 10
	// printf("3 + 7 = %d\n", add);
	// printf("%d * %d = %d\n", 30, 79, 30 * 79);

	// scanf (키보드 입력을 받아서 저장)
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상)
	/*char c = 'A';
	printf("%c\n", c);*/

	// str의 경우 256보다 더 큰 문자가 들어오면 문제 발생하기 때문에 sizeof(str) 추가
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	return 0;

}