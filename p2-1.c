#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //input[n]에 n을 대입(n<100) 
        input[i] = i;

    printf("----------[2016039030] [하준형]-------------\n\n");

    /* for checking call by reference*/
    printf("address of input = %p\n", input); //input의 주솟값
   
    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer); //합 출력
}

float sum(float list[],int n) //합을 구하는 함수
{
    printf("value of list = %p\n", list); //input의 주솟값이 list에 복사됨.
    printf("address of list = %p\n\n", &list); //list의 주솟값
    
   int i;
   float tempsum = 0;
   
   for(i = 0; i < n; i++)
         tempsum += list[i]; //합을 구함
   
   return tempsum;
}
