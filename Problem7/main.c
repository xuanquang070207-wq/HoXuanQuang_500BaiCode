#include<stdio.h>

void printff(int A[],int i,int j){
    printf("{");
    for(int k=i; k<j;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[j]);
}

int sumf(int A[],int i,int j){
    int sum=0;
    for(int k=i;k<j+1;k++){
        sum=sum+A[k];
    }
    return sum;
}

void solving(int A[],int n, int target){
    int len=1;
    int start=0,end=0;
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=i+1;j<n+1;j++) {
            sum=sumf(A,i,j);
            if(sum==target && len< j-i+1){
                start=i;
                end=j;
                len=j-i+1;
            }
        }
    }
    printff(A,start,end);
}

int main() {
    int A[]={ 5, 6, -5, 3, 5, 3, -2, 0 };
    int n= sizeof(A)/sizeof(A[0]);
    int target =6;
    solving(A,n,target);
}