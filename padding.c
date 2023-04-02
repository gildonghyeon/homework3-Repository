
#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("----길동현 2022041025----\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student)); //student의 크기 출력
printf("size of int = %ld\n", sizeof(int)); //int 크기 출력
printf("size of short = %ld\n", sizeof(short)); //short 크기 출력
return 0;
}
