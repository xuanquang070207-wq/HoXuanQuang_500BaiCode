#include<stdio.h>
void BubbleSort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[j-1]){
                int temp=A[j-1];
                A[j-1]=A[j];
                A[j]=temp;
            }
        }
    }
}

void printff(int A[],int n){
    printf("{");
    for(int k=0; k<n-1;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[n-1]);
}

void solving(int A[],int n){
    int rel[n];
    int t=0;
    BubbleSort(A,n);
    int i=0,j=n-1;
    int k=0;
    while(i<=j) {
        if(t==0){
            rel[k]=A[i];
            k++;i++;t=1;
        }
        if(t==1) {
            rel[k]=A[j];
            k++;j--;t=0;
        }
    }
    printff(rel,n);
}

int main() {
    int A[]= {6, 9, 2, 5, 1, 4} ;
    int n= sizeof(A)/sizeof(A[0]);
    solving(A,n);
}