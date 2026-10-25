#include<stdio.h>

void printff(int A[],int i,int j){
    printf("{");
    for(int k=i; k<j;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[j]);
}

bool isCorrect(int A[],int i,int j){
    int index1=0,index2=0;
    for(int k=i;k<j+1;k++) {
        if(A[k]==0) index1++;
        else index2++;
    }
    if(index1==index2) return 1;
    else return 0;
}

void solving(int A[],int n){
    int start=0, end=0;
    int len=1;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++){
            if(isCorrect(A,i,j)&& len<j-i+1){
                start=i;end=j;
                len=j-i+1;
            }
        }
    }
    printff(A,start,end);
}

int main() {
    int A[] = { 0,0, 1, 1, 0, 1, 0, 0 };
    int n = sizeof(A) / sizeof(A[0]);
    solving(A,n);
}