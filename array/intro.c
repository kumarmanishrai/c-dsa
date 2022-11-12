#include <stdio.h>

int main() {

    int arr[3];
    for(int i=0; i<3; i++){
        arr[i] = i;
    }

    for(int i=0; i<3; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}
