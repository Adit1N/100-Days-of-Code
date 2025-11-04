//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>
int main() {
    int i, j;
    int rows = 5;

    // Print the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (j <= i) {
                printf("*\n");
            }
        }
    }
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= rows; j++) {
            if (j <= i) {
                printf("*\n");
            }
        }
    }

    return 0; 
}