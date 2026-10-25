#include<stdio.h>

void printff(int A[],int n){
    printf("{");
    for(int k=0; k<n-1;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[n-1]);
}

void swap(int A[],int i,int j) {
    int temp= A[i];
    A[i]=A[j];
    A[j]=temp;
}

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

void solving(int X[],int Y[],int m, int n){
    for(int i=0;i<m-n;i++){
        if(X[i]!=0) continue;
        else {
            for(int j=i+1;j<m;j++) {
                if(X[j]!=0) {
                    swap(X,i,j);
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        X[i+m-n]=Y[i];
    }
    BubbleSort(X,m);
    printff(X,m);
}

int main() {
    int X[]={ 0, 0, 0, 3, 0, 5, 8, 0, 0 };
    int Y[]={ 1, 7, 9, 12, 16,20 };
    int m= sizeof(X)/sizeof(X[0]);
    int n= sizeof(Y)/sizeof(Y[0]);
    solving(X,Y,m,n);
}