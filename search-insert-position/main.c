#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
  int k = 0;

  for(int i = 0; i < numsSize; i++){
    if(nums[k] >= target) break;

    k = i + 1;
  }

  return k;
}

int main() 
{
  int nums[4] = {1,3,5,6};

  printf("RESULT: %d \n", searchInsert(nums, 4, 5));

  return 0;
}