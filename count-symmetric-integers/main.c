#include <stdio.h>

int countSymmetricIntegers(int low, int high) {
  int symm = 0, tmp = 0, n = 0, left = 0, right = 0;

  int tmp_high = high;
  int max_n = 1;

  while(tmp_high > 9){
    tmp_high = tmp_high / 10;
    max_n++;
  }
  
  if(max_n % 2 != 0) max_n--;

  for(int i = low; i <= high; i++){
    n = 1;
    left = 0;
    right = 0;
    tmp = i;
    
    while(tmp > 9){
      if(n <= (max_n/2)) right += tmp % 10;
      if(n > (max_n/2)) left += tmp % 10;

      tmp = tmp / 10;
      n++;
    }

    left += tmp;
    
    if(n % 2 == 0 && left == right) symm++;
  }

  return symm;
}

int main(){
  printf("RESULT: %d \n", countSymmetricIntegers(1200, 1230));

  return 0;
}