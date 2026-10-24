#include<stdio.h>
//Find the largest subarray formed by consecutive integers
int minf(int a,int b) {
    if(a<=b) return a;
    else return b;
}
int maxf(int a,int b) {
    if(a<=b) return b;
    else return a;
}

void printff(int A[],int i,int j){
    printf("{");
    for(int k=i; k<j;k++){
        printf("%d, ",A[k]);
    }
    printf("%d}\n",A[j]);
}

bool isCorrect(int A[],int i,int j, int min, int max) {
    if((max-min) != (j-i)) return 0;
    for(i;i<j;i++){
        int x=A[i];
        for(int k=i+1;k<j+1;k++){
            if(A[k]==x) return 0;
        }
    }
    return 1;
}

void solving(int A[],int n) {
    int len=1;
    int start=0, end=0;
    for(int i=0;i<n-1;i++){
        int min=A[i];
        int max=A[i];
        for(int j=i+1;j<n;j++){
            min=minf(min,A[j]);
            max=maxf(max,A[j]);
            if(isCorrect(A,i,j,min,max) && len<j-i+1){
                start=i; end=j;
                len=j-i+1;
            }
        }
    }
    printf("Vị trí start %d, end %d\n",start,end);
    printff(A,start,end);
}


int main() {
    int A[] = {2, 11, 14, 12, 16, 13, 15, 8, 30, 40};
    int n = sizeof(A) / sizeof(A[0]);
    solving(A,n);
}