#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void SigHandFunction2(int sig_number)
{
	printf("\n SIGOUT signal with number %d occured \n",sig_number);
	signal(SIGQUIT,SIG_IGN);
}

int main()
{
	
 //  signal(SIGINT,SigHandFunction1);
  // signal(SIGTSTP,SIG_IGN);
   signal(SIGQUIT,SigHandFunction2);
   
  while(1)
   {
   printf("\nHello World");
   sleep(5);
   
   }

return(0);
}

