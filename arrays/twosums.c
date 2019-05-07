/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //2 numbers in the array whose sum is a particular number.
int* twoSum(int* nums, int numsSize, int target) {
        
    int i,j,flag=0;
    int *a=(int*)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++) {
       
            for(j=i+1;j<numsSize;j++) {
                if(nums[j]==(target-nums[i])) {
                    flag=1;
                    
                    break;
                }
                
            }
            
        
        if(flag==1) {
            
            a[0]=i;
            a[1]=j;
            break;
        }
        
    }
    return a;
}
