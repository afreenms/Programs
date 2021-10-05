#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include  <sys/types.h>
#include  <sys/ipc.h>
#include  <sys/shm.h>

void sig_int_handler(int signo){
    printf("\nSIGINT recived");
    signal(SIGINT,SIG_IGN);
}

void sig_alarm_handler(int signo){
    printf("\nSIGALARM received");
    signal(SIGALRM,SIG_IGN);
}

void sig_tstp_handler(int signo){
    printf("\n SIGTSTP recived");
    signal(SIGTSTP,SIG_IGN);
}

int main(void)
{
    signal(SIGINT, sig_int_handler);
    signal(SIGALRM, sig_alarm_handler);
    signal(SIGTSTP, sig_tstp_handler);

    while(1){
        printf("\nHANDLING SIGINT, SIGALRM and SIFTSTP signals");
        sleep(1);
        
    }
    return 0;
}


