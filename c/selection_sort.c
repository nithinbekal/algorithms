
#include<stdio.h>

void selection_sort(int *list, int size) {
    int i, j, k, min_pos;
    
    for(i=0; i<size-1; i++){
        
        min_pos = i;
        j = i+1;
        
        while(j < size) {
            if(list[j] < list[min_pos]) 
                min_pos = j;
            j++;
        }
        
        if(min_pos != i) {
            k = list[i];
            list[i] = list[min_pos];
            list[min_pos] = k;
        }
    }
}

int main() {
    int i;
    int list[] = {5,2,4,6,1,3};
    
    printf("\nBefore sorting : ");

    for(i=0; i<6; i++)
        printf("%d ", list[i]);

    selection_sort(list, 6);

    printf("\nAfter sorting  : ");

    for(i=0; i<6; i++)
        printf("%d ", list[i]);
    
    printf("\n\n");
    
    return 0;
}
