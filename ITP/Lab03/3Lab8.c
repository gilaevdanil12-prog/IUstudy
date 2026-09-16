#include <stdio.h>

int find_length(char *string){
    int l = 0;
    while (string[l]){
        l++;
    }
    return l;
}
int main(){
    char strin[10000];
    scanf("%s", strin);
    printf("%d",find_length(strin));
    return 0;
}