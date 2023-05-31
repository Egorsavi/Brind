#include <stdio.h>

void array_input(float *arr, int n){
    for(int i =0; i<n; i++){
        scanf("%f", &arr[i]);
    }
}

int array_multiply(float* arr, int n){
    float mlp = 1;
    for(int i =0; i<n; i++){
        mlp*=arr[i];
    }
    return mlp;
}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    float arr[n];
    array_input(arr, n);
    float res = array_multiply(arr, n);
    printf("%f", res);
    return 0;
}