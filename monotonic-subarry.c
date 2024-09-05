#include<stdio.h>
#define MAX 50 
int longestMonotonicSubarray(int* nums, int numsSize) {
    //for strictly incresing subarray
    int temp =-1,top = -1,*stackI,maxtopI = 0,tt;
    stackI = (int*)malloc(MAX * sizeof(int));
    for(int i = 0 ;i<numsSize; i++) {
        if(temp < nums[i]){
            stackI[++top] = nums[i];
            temp = nums[i];
            if(maxtopI <= top){
                maxtopI++;
            }
        }
        else{
            while(top != -1){
                int del;
                del = stackI[top--];
            }
            stackI[++top]=nums[i];
            temp = nums[i];
        }
        
    }
    //for strictly decreasing subarray
    int temp1 =-1,top1 = -1,*stackD,maxtopD = 1,td;
    stackD = (int*)malloc(MAX * sizeof(int));
    stackD[++top1] = nums[0];
            temp1 = nums[0];
    for(int i = 1;i<numsSize; i++) {
        if(temp1 > nums[i]){
            stackD[++top1] = nums[i];
            temp1 = nums[i];
            if(maxtopD <= top1){
                maxtopD++;
            }
        }
        else{
            while(top1 != -1){
                int del;
                del = stackD[top1--];
            }
            stackD[++top1]=nums[i];
            temp1 = nums[i];
        }
        
    }
    free(stackI);
    free(stackD);
    return (maxtopD>maxtopI)?maxtopD:maxtopI;
}
void main()
{
	int nums[],numsSize;

	nums[0] = 1;
	nums[1] = 9;
	nums[2] = 7;
	nums[3] = 1;

	numsSize = 3;

	int sol = longestMonotonicSubarray(nums, numsSize);

	printf("%d",sol);
}

