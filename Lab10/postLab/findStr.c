#include <stdio.h>
#include <string.h>

// PART 2

void findStr() {
    char smallest_word[20] = "zzzzzzzzzzzzzzzzzzzz"; //biggest string possible in dictionary order
    char largest_word[20] = ""; // smallest string possible
    
    char input[20];
    // if (strcmp("cat",smallest_word) > 0) {
    //     strcpy(smallest_word,"cat");
    //     printf("%s\n", smallest_word);
    // }
    
    while ((unsigned)strlen(input) != 4) {
        printf("Enter word: ");
        scanf("%[^\n]%*c", input);
        
        if (strcmp(input,smallest_word) < 0) { //if input smaller than smallest_word
            strcpy(smallest_word,input);
        } else if (strcmp(input,largest_word) > 0) { // if input bigger than largest_word
            strcpy(largest_word,input);
        }
        
    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}

int main()
{
    findStr();
    return 0;
}
