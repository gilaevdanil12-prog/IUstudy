#include <stdio.h>
#include <string.h>
int factorial(int y){
    int res = 1;
    for( int i = 1; i <= y; i++){
        res *= i;
    }
    return res;
}

int is_strong(int num){
    int temp = num;
    int sum = 0;
    while(temp > 0){
        sum += factorial(temp%10);
        temp /= 10;
    }
    return (sum == num);
}



int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i<=b; i++){
        if ((i>0) && is_strong(i)){
            printf("%d ", i);
        }

    }
    
    return 0;

}
