//Sort binary array in linear time
#include<stdio.h> 
void solving(int *array,int n,int k){
     for(int i=0;i<n;i++){
        if(i<k){
            *(array+i)=0;
        } else {
            *(array +i)=1;
        }
     }
}
int main() {
    int array[]={ 1, 0, 1, 0, 1, 0, 0, 1 };
    int n= sizeof(array)/sizeof(array[0]);
    int k=0;
    for (int i=0;i<n;i++) {
        if(array[i]==0) {
            k++;
        }
    }
    solving(array,n,k);
     for (int i=0;i<n;i++){
        printf("%d",array[i]);
     }
}