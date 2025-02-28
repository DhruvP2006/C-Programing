#include <stdio.h>

int main() {
    int size, counter = 0;
    
    printf("Enter the size of the array you want to create: ");
    scanf("%d", &size);
    size++;
    int arr[size];
    
    printf("Enter the numbers for the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            int count = 1;  
            while (i < size - 1 && arr[i] == arr[i + 1]) {
                count++;
                i++;}
            counter += count;
        }
    }

    printf("The total count of duplicate elements is: %d\n", counter);

    return 0;
}
