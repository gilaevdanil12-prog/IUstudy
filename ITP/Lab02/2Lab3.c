#include <stdio.h>

void d_tr(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void d_aanother_tr(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void d_rect(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) { 
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice, n;

    printf("Choose sth:\n");
    printf("1 - triangle\n");
    printf("2 - triangle 2\n");
    printf("3 - not a triangle\n");
    printf("your choice: ");
    scanf("%d", &choice);


    printf("enter the size: ");
    scanf("%d", &n);

    
    if (choice == 1){
        d_tr(n);
    }
    else if (choice == 2){
        d_aanother_tr(n);
    }
    else if (choice == 3){
        d_rect(n);
    }
    else {
        printf("Wtf");
    }
    return 0;
}
