#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

  FILE* good = fopen("good", "w");
  FILE* bad = fopen("bad", "w");

  int a, b = 0;

  printf("Enter your data: \n");

  fscanf(stdin,"%d", &a);
  while(!feof(stdin)){
    if(a > b){
      fprintf(good, "%d\n", a);
      b = a;
    }
    else{
      fprintf(bad, "%d\n", a);
      b = a;
    }
    fscanf(stdin,"%d", &a);
  }

  fclose(good); fclose(bad);

  return 0;
}
