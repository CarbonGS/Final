#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"
#include "converting.h"
#include "tokenizing.h"
#include "manipulating.h"

int main(void) {
    char buff[10];
    do {
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");
        fgets(buff, sizeof(buff), stdin);

        int choice = atoi(buff);

        switch (choice) {
        case 1: fundamentals();
            break;
        case 2: manipulating();
            break;
        case 3: converting();
            break;
        case 4: tokenizing();
            break;
        default:
            printf("Invalid Choice. Select from valid numbers");
        }
    } while (buff[0] != '0');

    return 0;
}