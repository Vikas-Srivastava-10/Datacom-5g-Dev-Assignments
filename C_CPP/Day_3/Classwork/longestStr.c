//Longest string in collection of string 

#include <stdio.h>
#include <string.h>

int main() {
    char *strings[] = {"apple", "banana", "watermelon", "grape", "kiwi"};
    int n = sizeof(strings) / sizeof(strings[0]);
    char *longest = strings[0];

    for (int i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(longest)) {
            longest = strings[i];
        }
    }

    printf("The longest string is: %s\n", longest);

    return 0;
}
