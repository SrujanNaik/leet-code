#include<stdio.h> 
#include<stdbool.h>
#include<stdlib.h>

void merge(int,int,int[]);
int* mergeSort(int,int,int,int[]);
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    if (targetSize != arrSize) {
        return false;
    }
    merge(0, arrSize - 1, arr);
    merge(0, targetSize - 1, target);
    
    for(int i = 0; i<arrSize;i++){
        if(arr[i]!=target[i]){
            return false;
        }
    }
    return true;
}

void merge(int low,int high,int arr[]){
    if(low<high){
    int mid;
    mid = (low + high)/2;

    merge(low,mid,arr);
    merge(mid+1,high,arr);
    mergeSort(low,mid,high,arr);
}}

int* mergeSort(int low,int mid,int high,int arr[]){
    int k=0,i=low,j=mid+1;
    int* result = (int*)malloc((high - low + 1) * sizeof(int));
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            result[k++]=arr[i++];
        }
        else{
            result[k++]=arr[j++];
        }
    }
    while(i<=mid){
        result[k++]=arr[i++];
    }
    while(j<=high){
        result[k++]=arr[j++];
    }
    for(i=low,k=0;i<=high;i++,k++){
        arr[i]=result[k];
    }
    free(result);
    return result;
}
int main() {
    int arr[] = {1, 9, 7, 1};
    int target[] = {9, 7, 1, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int targetSize = sizeof(target) / sizeof(target[0]);

    bool result = canBeEqual(target, targetSize, arr, arrSize);
    
    if (result) {
        printf("Arrays can be made equal\n");
    } else {
        printf("Arrays cannot be made equal\n");
    }

    return 0;
}
