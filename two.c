#include <stdio.h>
#include <string.h>

int commonStart(char str1[], char str2[]){
  int same = 0;
  int a;
  for(a=0; a<strlen(str1); a++){
    if(str1[a] == str2[a]){
      same++;
    }
    else{
      break;
    }
  }
  return same;
}

int main(void){

  char str1[50], str2[50];
  printf("Enter two strings: ");
  scanf("%s %s", str1, str2);
  printf("\nThere are %d common letters at the start of %s and %s.\n\n", commonStart(str1, str2), str1, str2);

  return 0;
}
