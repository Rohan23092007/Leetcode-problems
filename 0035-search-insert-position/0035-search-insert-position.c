int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
int right = numsSize-1;
int mid;
if(nums[numsSize-1]<target){
    return numsSize;
}
while(right>=left){
    mid = left + (right - left)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if (nums[mid]>target){
        right = mid-1;
    }
    else if (nums[mid]<target){
        left=mid+1;
    }
    
}
return left;
}