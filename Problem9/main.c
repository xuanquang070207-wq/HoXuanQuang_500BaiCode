#include<stdio.h>

void printff(int A[],int n){
    printf("{");
    for(int k=0; k<n-1;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[n-1]);
}

void swap(int A[], int i,int j) {
    int temp= A[i];
    A[i]=A[j];
    A[j]=temp;
}

void solving(int A[],int n){
    int pivot=1;
    int start=0, end= n-1, index=0;
    while(index<=end){
        if(A[index]<pivot){
            swap(A,index,start);
            start++; index++;
        } else {
            if(A[index]>pivot){
                swap(A,index,end);
                end--;
            } else {
                index++;
            }
        }
    }
    printff(A,n);

 }
int main() {
    int A[]={ 2, 1, 2, 1, 1, 0, 0, 2, 0, 1, 1, 0 };
    int n= sizeof(A)/sizeof(A[0]);
    solving(A,n);
}