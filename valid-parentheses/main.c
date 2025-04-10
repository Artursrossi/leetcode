#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(char* s) {
    int n = 0;
    while(s[n] == '(' || s[n] == '{' || s[n] == '[' || s[n] == ')' || s[n] == '}' || s[n] == ']'){
        n++;
    }

    char str[n];
    int j = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            str[j] = s[i];
            j++;
            continue;
        }

        if(j == 0) return false;

        if(s[i] == ')' && str[j - 1] != '(')return false;
        if(s[i] == '}' && str[j - 1] != '{')return false;
        if(s[i] == ']' && str[j - 1] != '[')return false;

        j--;
    }

    if(j != 0) return false;

    return true;
}

int main() 
{
    printf("RESULT: %d \n", isValid("(){}[]((()))"));

    return 0;
}