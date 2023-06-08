#include <stdio.h>

void array_input(float *arr, int n){
    for(int i =0; i<n; i++){
        scanf("%f ", &arr[i]);
    }
}
void array_output(float *arr, int n){
    for(int i = 0; i<n; i++){
        printf("%f ", arr[i]);
    }
    printf("\n");

}

void sort_bul(float *arr, int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
                float t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

void res(int k, float *arr1, float *arr2){
    if(arr1[k-1]>arr2[k-1]) {
        printf("In first array %dth element is greater", k);
    }else if(arr1[k-1]<arr2[k-1]){
        printf("In second array %dth element is greater", k);
    }else{
        printf("In first and second arrays %dth element equals", k);
    }
}

int main() {
    int n, k;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter k:");
    scanf("%d", &k);
    float a[n];
    array_input(a, n);
    float b[n];
    array_input(b, n);
    array_output(a, n);

    array_output(b, n);
    sort_bul(a, n);
    sort_bul(b, n);
    res(k, a, b);
    return 0;
      }