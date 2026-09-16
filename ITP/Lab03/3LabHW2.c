#include <stdio.h>

int main(){
    int t;
    int n;
    scanf("%d", &n);

    int already[1001]= {0};
    int is_first = 1;
    for (int i = 0; i<n;i++){

        
        scanf("%d", &t);

        if (already[t] == 0){
            already[t] = 1;
            if (!is_first) {
                printf(" ");
            }
            printf("%d ", t);
            is_first = 0;
        }
    }
    return 0;
}
