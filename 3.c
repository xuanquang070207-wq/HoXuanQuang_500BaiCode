//Print all subarrays with 0 sum
#include<stdio.h>
void solution(int nums[],int n) {
    int k=0;
    for(int i=0;i<n;i++){
        int sum=nums[i];
        for(int j=i+1;j<n;j++){
            sum+=nums[j];
            if(sum==0){
                k=1;
                printf("{ ");
               for(int m=i;m<=j;m++) {
                  printf("%d ",nums[m]);
               }
               printf("}\n");
            }
        }
        if(k==0) {
            printf("Subarray with no zero-sum exists");
        }
    }
}
    
int main() {
    int nums[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n=sizeof(nums)/sizeof(nums[0]);
    solution(nums,n);
}