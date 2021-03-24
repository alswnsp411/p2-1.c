#include <stdio.h>
#define MAX_SIZE 100

float sum(float[], int);

float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("-------Minju Kim 2020039062-------\n");

    for (i=0; i < MAX_SIZE; i++)
    {
        input[i]=i;  
    }

    /*for checking call by reference*/
    printf("address of input = %p\n", input); //input 배열의 주소이다.

    answer = sum(input, MAX_SIZE);  //input 배열의 주소가 sum 함수의 list에 복사된다.
    printf("The sum is: %f\n", answer);
}

float sum(float list[], int n)  //n=100
{
    /*call by reference로 input의 주소를 list가 받아서 함수에서 list를 통해 input 배열에 접근할 수 있다.*/
    printf("value of list = %p\n", list);  //list의 값은 input 배열의 주소이다.
    printf("address of list =%p\n\n", &list);  //list의 값은 input 배열의 주소이므로 list의 주소와 다르다.

    int i;
    float tempsum = 0;

    for (i = 0; i < n; i++)
    {
        tempsum += list[i];  //list를 통해 input 배열에 저장된 값들의 합을 구한다.
    }

    return tempsum;
}
