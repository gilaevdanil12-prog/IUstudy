#include <stdio.h>
#include <string.h>

int main(){
    
    char x[100]; 
    scanf("%s", x);
    for (int i = strlen(x) -1; i>= 0; i--){
        printf("%c", x[i]);
    }
    printf("\n");

    return 0;

}