#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char character;
    int pos = 0, maxFreq = 0, f = 0, tf = 0;
    int equalFreq[27];
    int freq[27];
    
    memset(freq, 0, sizeof(freq));
    memset(freq, 0, sizeof(equalFreq));
    
    FILE *filePointer;

    if (argc >= 2) {
      filePointer = fopen(argv[1], "r");
    }
    else {
      filePointer = fopen("test.txt", "r");
    }
    
    while ((character = fgetc(filePointer)) != EOF) {
        if (character >= 'a' && character <= 'z') {
            pos = character - 'a';
            freq[pos]++;
        }
        else if (character >= 'A' && character <= 'Z') {
            pos = character - 'A';
            freq[pos]++;
        }
    }
    
    for (f = 0; f < 26; f++) {
        if (freq[f] > maxFreq) {
            pos = f;
            maxFreq = freq[f];
            tf = 0;
        } 
        if (maxFreq == freq[f] && freq[f] > 0) {
            equalFreq[tf] = f;
            tf++;
        }
    }
    
    printf("The mos frequent letter is ");
    for (f = 0; f < tf; f++) {
        printf("'%c'", equalFreq[f] + 'a');
        printf(". It appeared %d times.\n", maxFreq);
    }
    
    fclose(filePointer);
    return 0;
}

