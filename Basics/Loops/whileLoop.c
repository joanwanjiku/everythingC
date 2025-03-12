//
//  whileLoop.c
//  Basics
//
//  Created by Joan Ndambiri on 2/24/25.
//

#include <stdio.h>
#include <math.h>

int mainLoop(void){
//         temporary storage for incoming numbers
        int number;

        /* we will store the currently greatest number here */
        int max = -100000;

        /* get the first value */
        scanf ("%d", &number);

        /* if the number is not equal to -1 we will continue */
        while (number != -1) {

                /* is the number greater than max? */
               if (number > max)

                     /* yes – update max */
                     max = number;

                /* get next number */
                scanf ("%d", &number);

        }

        /* print the largest number */
        printf("The largest number is %d \n", max);

        /* finish the program successfully */
        printf("TESTING DO_WHILE\n");
//    do-while
        int num;
        int mx = -100000;
        int counter = 0;

        do {
            printf("enter a number ");
            scanf("%d",&num);
            if(num != -1)
                counter++;
                if(num > mx)
                    mx = num;
        }
        while (num != -1);
            if(counter)
              printf("The largest number is %d \n",mx);
            else
                printf("Hey, you haven't entered any number!");
    
    int n, i = 1, j;
        
        // Get user input
        printf("Enter a number: ");
        scanf("%d", &n);
        
        // Limit input range
        if (n <= 1) {
            n = 1;
        } else if (n > 20) {
            n = 20;
        }
        
        // Outer loop for number of lines
        do {
            j = 1;
            // Inner loop for printing *# pairs
            do {
                printf("*#");
                j++;
            } while (j <= i);
            
            printf("\n"); // New line after each row
            i++;
        } while (i <= n);
    int a, b;
    printf("enter a number:- ");
    scanf("%d", &a);
    if (a <= 1) {
            a = 0;
        } else if (a > 20) {
            a = 20;
        }
    b = a;
    for (int i = 0; i <= a; i++) {
        printf("*");
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = b; i >= 0; i--) {
        printf("*");
        for (int j = i; j > 0; j--) {
            printf(" ");
        }
        printf("*\n");
    }
    
        return 0;
}



