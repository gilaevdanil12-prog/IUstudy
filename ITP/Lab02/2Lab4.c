#include <stdio.h>

void swap(int *x, int *y){
    *x += *y;
    *y = *x-*y;
    *x -= *y;
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before swap: %d %d \n", a, b);
    swap(&a,&b);
    printf("After swap: %d %d \n", a, b);
    return 0;
}