#include<stdio.h>

void printff(int A[],int n){
    printf("{");
    for(int k=0; k<n-1;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[n-1]);
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

void solving(int X[],int Y[], int m,int n) {
    int C[m+n];
    for(int i=0;i<m;i++){
        C[i]=X[i];
    } 
    for(int i=0;i<n;i++){
        C[m+i]=Y[i];
    }
    BubbleSort(C,m+n);
    for(int i=0;i<m;i++){
        X[i]=C[i];
    } 
    printff(X,m);
    for(int i=0;i<n;i++){
        Y[i]=C[m+i];
    }
    printff(Y,n);

}

int main() {
    int X[]={ 11, 41, 27, 82, 101 };
    int Y[]={ 22, 39, 91 };
    int m= sizeof(X)/sizeof(X[0]);
    int n= sizeof(Y)/sizeof(Y[0]);
    solving(X,Y,m,n);
}