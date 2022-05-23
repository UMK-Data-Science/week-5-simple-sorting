//documentation section 
/* Exercise 1 - Bubble Sort*/

//pre-processor section 
#include<stdio.h>

//global variable section 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

//main function section 
int main(){
    //write here your program
    int i; 
    int UA[] = {5,1,4,2,8};
    int n = sizeof(UA) / sizeof(UA[0]);
    bubbleSort(UA, n);
    printf("Sorted Element using Bubble Sort Technique is: ");
    for (i = 0; i < n; i++)
        printf("%d ", UA[i]);

    return 0;
    
}

//user-defined section 
