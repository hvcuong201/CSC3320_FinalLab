#include <stdio.h>

//PART1
char* strcpy (char* strDest, const char* strSrc) {
    int i = 0;
    
    while(strSrc[i] != 0) {
        strDest[i] = strSrc[i];
        i++;
    }
    
    // set the last character to null
    strDest[i] = '\0';
    
    return strDest;
}

int main()
{

    char str1[]="Hello World!";
    char str2[] = "What's Popping";
    char str3[40];
    char str4[40];
    char str5[] = "Koolaid";
     
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);
    return 0;
}


