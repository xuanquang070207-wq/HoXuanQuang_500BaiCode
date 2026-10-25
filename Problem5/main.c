#include<stdio.h>

void solving(int A[],int n){
    int result, index;
    for(int i=0;i<n;i++) {
        if(A[i]!=i+1){
            result=A[i];
            index=i;
            break;
        }
    }
    printf("Giá trị bị lặp lại là %d ở vị trí %d",result,index+1);
}

int main() {
    int A[]={ 1, 2, 3,3, 4 };
    int n=sizeof(A)/sizeof(A[0]);
    solving(A,n);
}