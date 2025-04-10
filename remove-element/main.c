#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
  if(numsSize == 0) return 0;

  int k = 0;
  int temp[numsSize];

  for(int i = 0; i < numsSize; i++){
    if(nums[i] != val){
      temp[k] = nums[i];
      k++;
    }
  }

  for(int i = 0; i < k; i++){
    nums[i] = temp[i];
  }

  return k;
}

int main() 
{
  int nums[4] = {3,2,2,3};

  printf("RESULT:%d", removeElement(nums, 4, 3));

  return 0;
}