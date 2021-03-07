#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int cnt = 0;
//
//int fib(int n){
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
////8
////7         6
////6    5    5    4
////5    4    4    3    4    3    3    2
////4   3   3   2   3   2   2   1  3   2   2 1  2 1  1 0
////3   2   2   1 2 1 1 0 2 1 1 0 1 0    2 1 1 0 1 0  1 0 
////2 1 1 0 1 0   1 0     1 0            1 0
////1 0
////
////67 
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//
//	return 0;
//}
//

//int main()
//{
//	int x = 1;
//	do{
//		printf("%2d\n", x++);
//	} while (x--);
//
//	return 0;
//}
//


#include<stdio.h>
#include<stdlib.h>
//
//int a = 1;
////
//void /*呵呵*/ test(){
//	int a = 2;
//	a += 1;//局部优先 a = 3
//}
//
//int main(){
//	if (1)
//	{
//	}
//	test();
//	printf("%d\n", a);//1
//	return 0;
//}

//
//int main()
//{
//	//int a = 0, c = 0;
//	//do{
//	//	--c;//-1
//	//	a = a - 1;//a=-1
//	//} while (a>0);
//
//	int x = 0;
//	int y = 0;
//
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	{
//		printf("hehe\n");
//	}
//
//
//
//	return 0;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

#include <stdio.h>


int main() {
	char arr[100][100];

	int i = 0;

	while (scanf("%s", &arr[i][100]) != EOF){
		i++;
	}
	while (i >= 0) {
		if (i == 1) {
			printf("%s\n", arr[i]);
		}
		else {
			printf("%s ", arr[i]);
		}
		i--;
	}

	return 0;
}