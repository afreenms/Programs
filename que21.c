#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void File_Type(char File_Name[])
{
    int fp=0,i=0,a=0;
    fp=open(File_Name,O_RDONLY);
    if (fp==-1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        printf("\n File Type:");
        for ( i = 0; i < strlen(File_Name); i++)
        {
            if(a || File_Name[i]=='.')
            {
                printf("%c",File_Name[i]);
                a=1;
            }
        }
        
    }
}

int main(int argc, char *argv[])
{
	int i;
    for (i = 0; i < argc; i++)
    {
        File_Type(argv[i]);
    }
    printf("\n");
    return(0);
}


