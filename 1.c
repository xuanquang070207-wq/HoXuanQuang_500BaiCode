//Find a pair with the given sum in an array
#include<stdio.h>
void solutions(int nums[],int target,int n) {
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((nums[i]+nums[j])==target) {
                k=1;
                printf("Pair found(%d,%d)\n",nums[i],nums[j]);
            }
        }
    }
    if(k==0){
        printf("Pair not found");
    }
}
int main (){
    int nums[]={8, 7, 2, 5, 3, 1};
    int n= sizeof(nums)/sizeof(nums[0]);
    int target=10;
    solutions(nums,target,n);
}