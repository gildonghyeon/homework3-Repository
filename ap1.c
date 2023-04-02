//----- 길동현 2022041025 -----//
#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];
int *plist[5] = {NULL,};
plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 int의 크기를 저장
list[0] = 1;
list[1] = 100;
*plist[0] = 200;
printf("list[0] = %d\n", list[0]); //list[0] 출력
printf("&list[0] = %p\n", &list[0]); //list[0] 주소 출력
printf("list = %p\n", list); //list의 주소 출력 
printf("&list = %p\n", &list); //list의 주소 출력
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]); //list[1] 출력
printf("&list[1] = %p\n", &list[1]); //list[1]의 주소 출력
printf("*(list+1) = %d\n", *(list + 1)); //list[1] 출력
printf("list+1 = %p\n", list+1); //list[1]의 주소 출력
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]값 출력
printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소출력
printf("&plist = %p\n", &plist); //plist[0]의 주소출력
printf("plist = %p\n", plist); //plist[0]의 주소 출력
printf("plist[0] = %p\n", plist[0]); //plist[0]의 값을 출력
printf("plist[1] = %p\n", plist[1]); //plist[1]의 값을 출력
printf("plist[2] = %p\n", plist[2]); //plist[2]의 값을 출력
printf("plist[3] = %p\n", plist[3]); //plist[3]의 값을 출력
printf("plist[4] = %p\n", plist[4]); //plist[4]의 값을 출력
free(plist[0]);
}