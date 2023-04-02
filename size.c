
#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("----길동현 2022041025----\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 값의 크기 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //x가 가리키는 값이 가리키는 값의 크기를 출력
}
