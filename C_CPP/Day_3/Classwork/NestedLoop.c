/*
take name an age from the user.
	say if the age is 5+ --> elemetary school ,11+ --> middle school, 14+ --> High School, 16+ ==> Pre-University, 18+ --> Under graduation,21+ --> Adult.
*/
#include <stdio.h>
int main() {
    char name[25];   // Array to store name
    int age;         // Variable to store age
    // Accept name from user
    printf("Enter a name: ");
    scanf("%s", name);
    // Accept age from user
    printf("Enter age: ");
    scanf("%d", &age);
    // Check age category
    if (age >= 21)
        printf("%s is an Adult.\n", name);
    else if (age >= 18)
        printf("%s is in Under Graduation.\n", name);
    else if (age >= 16)
        printf("%s is in Pre-University.\n", name);
    else if (age >= 14)
        printf("%s is in High School.\n", name);
    else if (age >= 11)
        printf("%s is in Middle School.\n", name);
    else if (age >= 5)
        printf("%s is in Elementary School.\n", name);
    else
        printf("%s is too young for school.\n", name);

    return 0;
}
