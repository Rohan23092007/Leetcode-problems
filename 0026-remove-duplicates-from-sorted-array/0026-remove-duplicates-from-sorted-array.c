int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    for(int i = 0 ; i < numsSize-1; i++){
        if(nums[i]!=nums[i+1]){
            k++;
            nums[k] = nums[i+1];
        }
    }
    return (k+1);
}