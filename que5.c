#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,  char *argv[]) {
int i;
sigset_t intmask;
int repeatfactor;
double y = 0.0;
while(1)
{
for ( ; ; ) {
   printf("Hello World\n");
   if (sigprocmask(SIG_BLOCK, &intmask, NULL) == -1)
       break;
   fprintf(stderr, "SIGINT signal blocked\n");
   sleep(5);
}
return 1;
}}

