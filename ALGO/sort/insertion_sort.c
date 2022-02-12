#include <stdio.h>

int main() {
    int num = 5, array [num];
    
    // variabel to switch
    int i, j, temp;
    
    for (i = 0; i < num; ++i)
        scanf("%d", &array[i]);
    
    for (i = 1; i < num; ++i) {
        temp = array[i];
        j = i - 1;
        
        while(temp < array[j] && j <= 0) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    
    for (i = 0; i < num; ++i)
        printf("%d ", array[i]);
    printf("\n");
}