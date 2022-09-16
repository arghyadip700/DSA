#include <stdio.h>

display(int arr[], int size){
    printf("Array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

indDeletion(int arr[], int size, int index){
    for(int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main(){
    int arr[100] = {2, 4, 9, 1, 74};
    int size = 5, index = 2;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}