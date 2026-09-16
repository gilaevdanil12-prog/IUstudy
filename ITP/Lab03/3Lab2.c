#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
    *a += *b;
    *b = *a-*b;
    *a -= *b;
}

int main(){

    char example[1000];
    scanf("%s", example);
    int count[26] = {0};
    char chars[26];
    int frequency[26];
    int for_existing = 0;
    for (int i = 0; example[i] != '\0'; i++){
        if (example[i] >= 'a' && example[i] <='z'){
            count[example[i]- 'a']++;
        }}
    
    for (int j = 0; j < 26; j++){
        if (count[j] != 0){
            chars[for_existing] = (char)('a'+j);
            frequency[for_existing] = count[j];
            for_existing++;
        }
    }
    for (int i = 0; i < for_existing-1; i++){
        for (int j = i+1; j < for_existing; j++){
            if (frequency[j] > frequency[i] || (frequency[j] == frequency[i] && chars[j] > chars[i])){
                swap(&frequency[i], &frequency[j]);
                char str_temp;
                str_temp = chars[i];
                chars[i] = chars[j];
                chars[j] = str_temp;
            }
        }
    }
    /*for (int i = 0; i<for_existing; i++){
        printf("%c ", chars[i]);
        while (frequency[i]> 0){
            printf(".");
            frequency[i]--;
        }
        printf("\n");
    }*/

    int max_frequency = frequency[0];
    //Vertical histogramm
    for (int i = 0; i<for_existing; i++){
        printf(" %c", chars[i]);
    }

    for (int j = 1; j<=max_frequency; j++){
        printf("\n");
        for (int k = 0; k<for_existing; k++){
        if (frequency[k] >= j){
            printf(" .");
        }
        else{
            printf("  ");
        }
        }
    }
    return 0;

}