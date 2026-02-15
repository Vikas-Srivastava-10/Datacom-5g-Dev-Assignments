
// Purpose - Write a program to display command-line arguments in C, showing the count of arguments (argc) and listing each argument (argv).

#include <stdio.h>

int main(int argc, char *argv[]){
        printf("Count of args: %d\n", argc);
        printf("Argument List: \n");
        for(int cnt = 0; cnt < argc; cnt++)
                printf("\t\targv[%d]  ==> %s\n", cnt, argv[cnt]);

}
