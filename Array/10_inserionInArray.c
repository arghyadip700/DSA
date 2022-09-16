#include <stdio.h>

display(int arr[], int size){
    printf("Array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {2, 4, 9, 1, 74};
    int size = 5, element = 43, index = 2;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    return 0;
}