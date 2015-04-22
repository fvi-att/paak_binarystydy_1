/* this program is to open txt file and
   output its data

*/

#include<stdio.h>

int main(int argc,char* argv) {
  FILE *fp;
  char *filename = "read_it.txt";

  char stack[100];
  char *stack_ptr = stack;

  fp = fopen(filename,"r");
  if(fp == NULL){
    printf("err_with opentext.");
    
    return 1;
  }

  printf("get text from .txt and strcpy");
  
  char buff;
  while((buff = fgetc(fp)) != EOF){
    
    *stack_ptr++ = buff;
    
  }
  
  printf("print output is: %s",stack);

  
  fclose(fp);
  return 0;
}
