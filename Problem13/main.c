#include<stdio.h>

int multi(int A[],int i,int j){
    return A[i]*A[j];
}

void solving(int A[],int n){
    int index[n-1];
    int k=0;
    int max=0;
    for(int i=0;i<n-1;i++) {
        if(multi(A,i,i+1)>max) {
            max=multi(A,i,i+1);
        }
    }
    for(int i=0;i<n-1;i++) {
        if(multi(A,i,i+1)==max) {
            index[k]=i;k++;
        }
    }
    printf("Cặp số có tích lớn nhất là:");
    for(int i=0;i<k;i++){
        printf("{%d, %d} ",A[index[i]],A[index[i]+1]);
    }
}

int main() {
    int A[]= {-9, -3, 2, 8, -2, 7, 5};
    int n= sizeof(A)/sizeof(A[0]);
    solving(A,n);
}