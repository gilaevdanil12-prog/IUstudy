#include <stdio.h>


struct date{
    unsigned short day: 5;
    unsigned short year: 7;
    unsigned short month: 4;
};

int main(){
    int base_y = 1900;
    struct date birthday;
    birthday.day = 11;
    birthday.month = 9;
    birthday.year = 2008 - base_y;
    printf("My birthday is %u.%u.%u\n", birthday.day, birthday.month, birthday.year + base_y);
    printf("Size of bd struct is %lu bytes\n", sizeof(birthday));
    return 0;
}