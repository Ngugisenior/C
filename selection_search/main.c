#include <stdio.h>
#include <stdlib.h>

void SelectionSearch(int A[], size_t n){

    for(int i = 0 ; i < n-1; i++){

        for(int j = i+1; j <= n; j++){

            if(A[j] < A[i]){

                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }

    }
}


int main()
{
    int A[] = {8,9,4,5,2,3,1,6,3,7,9,5,3,24,9};

    SelectionSearch(A,sizeof(A)/sizeof(A[0]));

    for(int i =0; i < (int)sizeof(A)/sizeof(A[0]); i++){
        printf("%d, ",A[i]);
    }
    return 0;
}

