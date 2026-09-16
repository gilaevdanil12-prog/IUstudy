#include <stdio.h>
#include <string.h>


int main(){

    char password[4];
    int counter = 0;

    if (scanf("%3[^\n]", password)!=1){
        return 0;
    }
    int len = strlen(password);


    if (len == 1){
    for (int i = 32; i<=126; i++){
        counter += 1;
        if ((char)i == password[0]){
            goto found;
        }}}

    else if (len == 2){
    for (int i = 32; i<=126; i++){
        for (int j = 32; j<=126; j++){
            counter += 1;
            if ((char)i == password[0] && (char)j == password[1]){
                goto found;
            }
        }}}

    else{
    for (int i = 32; i<=126; i++){
        for (int j = 32; j<=126; j++){
            for (int k = 32; k<=126; k++){
                counter += 1;
                
                if ((char)i == password[0] && (char)j == password[1] &&(char)k == password[2]){
                    goto found;
                }
            }
        }
    }}

    found:
        printf("found = %s\nnumber of attempts = %d\n", password, counter);
        return 0;
}