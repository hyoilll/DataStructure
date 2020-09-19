#include <stdio.h>
#define NUM 5

void printHello(int num)
{
	for (int i = 0; i < num; ++i)
	{
		printf("hello\n");
	}
}

int add(int a, int b)
{
	return a + b;
}

int totalSum(int from, int to)
{
	int result = 0;

	for (int i = from; i <= to; ++i)
	{
		result += i;
	}

	return result;
}

int main()
{
	printf("hello\n");

	// 변수
	int num = 5;
	printf("변수 num : %d\n", num);

	// 상수
	printf("상수 NUM : %d\n", NUM);

	// array
	int a = 10, b = 20, c = 30, d = 40;
	int arr[4] = { 10,20,30,40 };
	
	printf("%d %d %d %d\n", a, b, c, d);
	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

	for (int i = 0; i < 4; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// pointer
	int* p = &a;
	int* pa = arr; // == &arr[0]

	printf("a : %p\n", &a);
	printf("p : %p\n", p);
	printf("%d\n", *p);

	printf("arr : %p\n", arr);
	printf("pa : %p\n", pa);

	for (int i = 0; i < 4; ++i)
	{
		printf("%d ", *(pa + i));
	}
	printf("\n");

	// 사용자 정의 함수
	printHello(2);
	printf("%d\n", add(10, 20));
	printf("%d\n", totalSum(1, 10));

	// 문자열
	char* s = "hello"; // hello문자열의 주소를 s에 담아줌

	printf("%s\n", s);
	
	return 0;
}