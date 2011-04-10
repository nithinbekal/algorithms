
#include<stdio.h>

void insertion_sort(int* list, int size) {
    int i, j, key;
    
    for(i=1; i<size; i++) {
        key = list[i];
        j = i-1;
        
        while(j>=0 && list[j] > key) {
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = key;
    }
}

int main() {
    
    int i;
    int arr[] = {5,2,4,6,1,3};
    
    printf("\nBefore sorting : ");

    for(i=0; i<6; i++)
        printf("%d ", arr[i]);

    insertion_sort(arr, 6);

    printf("\nAfter sorting  : ");

    for(i=0; i<6; i++)
        printf("%d ", arr[i]);
    
    return 0;
}