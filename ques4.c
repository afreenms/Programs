#include<stdio.h>
#include<signal.h>
void INTHandler()
{
        static int cnt=0;
        cnt++;

        printf("\n INTerrupt signal has occured %d times\n",cnt);
        if(cnt>=5)
        {
                signal(SIGINT,SIG_DFL);
        }
}
int main()
{

 int cnt=0;
 signal(SIGINT,INTHandler);
 while(1)
   {
   printf("\nHello we are counting here!\n");
   sleep(1);

   }
return(0);
}

