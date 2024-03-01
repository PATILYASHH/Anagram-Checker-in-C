#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    // Remove spaces and convert to lowercase
    char cleanedStr1[100], cleanedStr2[100];
    int i = 0, j = 0;
    
    while (str1[i]) {
        if (!isspace(str1[i])) {
            cleanedStr1[j++] = tolower(str1[i]);
        }
        i++;
    }
    cleanedStr1[j] = '\0';
    
    i = 0;
    j = 0;
    
    while (str2[i]) {
        if (!isspace(str2[i])) {
            cleanedStr2[j++] = tolower(str2[i]);
        }
        i++;
    }
    cleanedStr2[j] = '\0';

    // Check if lengths are different
    if (strlen(cleanedStr1) != strlen(cleanedStr2)) {
        return 0; // False
    }

    // Count occurrences of each character in both strings
    int count[256] = {0};
    for (i = 0; cleanedStr1[i] && cleanedStr2[i]; i++) {
        count[cleanedStr1[i]]++;
        count[cleanedStr2[i]]--;
    }

    // Check if all counts are 0
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // False
        }
    }

    return 1; // True
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }

    return 0;
}