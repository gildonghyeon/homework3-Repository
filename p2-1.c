
#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("----길동현 2022041025----\n");
for(i=0; i < MAX_SIZE; i++)
input[i] = i;
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소값 출력
answer = sum1(input, MAX_SIZE); //answer에 sum1함수 결과값 저장 및 출력
printf("The sum is: %f\n\n", answer); //answer 값 출력
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소값 출력
answer = sum2(input, MAX_SIZE); //sum2함수 결과갑을 answer에 저장 및 출력
printf("The sum is: %f\n\n", answer); //answer 값 출력
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소값 출력
answer = sum3(MAX_SIZE, input); //answer에 sum3 결과값 저장 및 출력
printf("The sum is: %f\n\n", answer); //answer값 출력
}
float sum1(float list[], int n) {
printf("list \t= %p\n", list); //list 주소값 출력
printf("&list \t= %p\n\n", &list); //list주소값출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += list[i]; //i에서 n값까지 tempsum에 더하기
return tempsum;}
float sum2(float *list, int n) {
printf("list \t= %p\n", list); //list주소값 출력
printf("&list \t= %p\n\n", &list); //list주소값 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += *(list + i); //i에서 n값까지 tempsum에 더하기
return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list) {
printf("list \t= %p\n", list); //list주소값 출력
printf("&list \t= %p\n\n", &list); //list주소값 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += *(list + i); //i에서 n값까지 tempsum에 더하기
return tempsum;
}
