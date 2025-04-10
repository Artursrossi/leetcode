#include <stdio.h>
#include <stdbool.h>

int removeDuplicates(int *nums, int numsSize) {
  int temp[numsSize];
  int k = 0;
  bool flag;

  for(int i = 0; i < numsSize; i++){
    flag = true;

    for(int j = 0; j < k; j++){
      if(nums[i] == temp[j]) flag = false;
    }

    if(flag){
      temp[k] = nums[i];
      k++;
    }
  }

  for(int i = 0; i < k; i++){
    nums[i] = temp[i];
  }

  return k;
}

int main(){
  int nums[10] = {0,0,1,1,1,2,2,3,3,4};

  printf("RESULT: %d \n", removeDuplicates(nums,10));

  return 0;
}