//
//  arrays.c
//  Basics
//
//  Created by Joan Ndambiri on 3/11/25.
//

#include "arrays.h"

#include <stdio.h>

int main(void) {
//    declaration
    
//    fibonnacci
    int a=0, b=1, next;
    int numbers[10];
    for (int i = 0; i < 10; i++){
        printf("%d\n", b);
        next = a + b;
        a = b;
        b = next;
        numbers[i]=a;
    }
    printf("%d\n%d\n%d\n%d\n%d\n", numbers[1], numbers[3], numbers[5], numbers[7], numbers[9]);
    printf("%d\n%d\n%d\n%d\n%d\n", numbers[0], numbers[2], numbers[4], numbers[6], numbers[8]);
//    reversed alphabet
    char reversed[26];
    for (char i = 'z'; i >= 'a'; i--) {
        reversed[26] = i;
        printf("%c\n", i);
    }
    printf("%c\n", reversed[3]);
    
//    bubble sort
    int numbersArr[5];
            int i, aux;
            int swapped;
            
            /* ask the user to enter 5 values */
            for(i = 0; i < 5; i++) {
                printf("\nEnter value #%i\n",i + 1);
                scanf("%d",&numbersArr[i]);
            }
            
            /* sort them */
            do {
                swapped = 0;
                for(i = 0; i < 4; i++) {
                    if(numbersArr[i] > numbersArr[i + 1]) {
                        swapped = 1;
                        aux = numbersArr[i];
                        numbersArr[i] = numbersArr[i + 1];
                        numbersArr[i + 1] = aux;
                    }
                }
            } while(swapped);
            
            /* print results */
            printf("\nSorted array: ");
            for(i = 0; i < 5; i++)
                printf("%d ",numbersArr[i]);
            
            printf("\n");
}
