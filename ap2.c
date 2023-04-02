
#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("----길동현 2022041025----\n");
int list[5];
int *plist[5];
list[0] = 10;
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int의 크기 저장
printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
printf("list \t\t= %p\n", list); //list의 주소값 출력
printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소값 출력
printf("list + 0 \t= %p\n", list+0); //list[0]의 주소값 출력
printf("list + 1 \t= %p\n", list+1); //list[1]의 주소값 출력
printf("list + 2 \t= %p\n", list+2); //list[2]의 주소값 출력
printf("list + 3 \t= %p\n", list+3); //lsit[3]의 주소값 출력
printf("list + 4 \t= %p\n", list+4); //list[4]의 주소값 출력
printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소값 출력
free(plist[0]);
}
