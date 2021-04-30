#include <stdio.h>

int main()
{
    char phoneNumber[12];
    printf("Enter phone number [(999)999-9999]: ");
    scanf("%s", phoneNumber);  
    printf("You entered %.*s", 3, phoneNumber+1);
    printf("-%.*s\n", 8, phoneNumber+5);
    return 0;
}
