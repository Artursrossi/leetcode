#include <stdio.h>
#include <stdbool.h>

int strStr(char* haystack, char* needle) {
  int i = 0, j = 0;
  bool flag = false;

  while(haystack[i] != '\0'){
    j = 0;
    
    while(1){
      if(needle[j] == '\0') return i;

      if(needle[j] != haystack[i+j]) break;

      j++;
    }

    i++;
  }

  return -1;
}

int main(){
  char *haystack = "sadbutsad";
  char *needle = "sad";

  printf("RESULT: %d \n", strStr(haystack, needle));

  return 0;
}