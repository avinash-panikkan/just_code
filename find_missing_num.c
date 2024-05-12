/*
input: 1<M<100
       array_size[M-1]

The arguments take a number M between 1 and 100, and an array consisting of numbers from 1 to M 
with one of the M numbers missing in the array. (array size -> M-1)

Find the missing number.
*/


#include <stdio.h>
#include<stdlib.h> //exit

int main() {
    int M, A[100], count=0;

    printf("Enter a number between 1 and 100 : ");
    scanf("%d",&M);
    if(M<2 || M>99){
        printf("Error");
        exit(0);
    }

    printf("Enter the elements of the array [1,M] with one number missing: ");
    for(int i=0; i<M-1; i++){
        scanf("%d",&A[i]);
    }

    //finding the missing number
    for(int i=1; i<=M; i++){
        for(int j=0; j<M-1; j++){
            if(i==A[j]){
                count=0;
                break;
            }else{
                count++;
            }
        }
        if(count==M-1){
            printf("Missing number: %d",i);
            exit(0);
        }
    }
    
    return 0;
}