#include <stdio.h>

int find_length(char *string){
    int l = 0;
    while (string[l]){
        l++;
    }
    return l;
}

int main(){
    char orig[1000];
    scanf("%s", orig);
    char copy[find_length(orig)+1];
    char *orig_p = orig;
    char *copy_p = copy;
    
    while (*orig_p != '\0'){
        *copy_p = *orig_p;
        copy_p++;
        orig_p++;
    }
    printf("Input: %s\n", orig);
    printf("Copy: %s\n", copy);
    return 0;
}