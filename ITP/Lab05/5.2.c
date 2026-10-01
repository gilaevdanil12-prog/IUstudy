#include <stdio.h>


union packet{
    unsigned int num;
    struct{
        unsigned char version: 4;
        unsigned char IHL: 4;
        unsigned char DSCP: 6;
        unsigned char ECN: 2;
        unsigned short total_len;
    } parse;
};

int main(){
    union packet inp;
    scanf("%d", &inp.num);
    printf("%u\n", inp.parse.version);
    printf("%u\n", inp.parse.IHL);
    printf("%u\n", inp.parse.DSCP);
    printf("%u\n", inp.parse.ECN);
    printf("%u\n", inp.parse.total_len);
    return 0;
}