#include<stdio.h>

void solving(int A[],int n) {
    int pre_index=-1;
    int max=0;
    int count=0;
    int result;
    for(int i=0;i<n;i++){
        if(A[i]==1) count++;
        else {
            count=i-pre_index;
            pre_index=i;
        }
        if(count>max){
            max=count;
            result=pre_index;
        }
    }
    printf("Vị trí cần thay thế là %d",result);
}

int main () {
   int A[]= { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 };
   int n=sizeof(A)/sizeof(A[0]);
   solving(A,n);
}