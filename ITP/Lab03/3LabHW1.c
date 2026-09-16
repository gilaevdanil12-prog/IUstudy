#include <stdio.h>

int main(){
    
    int cur_num = 1;
    int lines;

    scanf("%d", &lines);

    for (int i = 0; i<lines; ++i){
        for (int q = 0; q<lines-1-i; q++){
            printf(" ");
        }

        for (int j = 0; j<=i; j++){
            printf("%d", cur_num++);
        }
        printf("\n");

    }
    return 0;

}