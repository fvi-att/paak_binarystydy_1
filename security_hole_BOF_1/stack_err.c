#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

  char buf[10]  ="Hello";

  setuid(0);

  if(argc > 1){
    strcpy(buf,argv[1]);
  }
  printf("%s\n",buf);

  return 0;
}

