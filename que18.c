#include<stdio.h>
#include<conio.h>
#include<dirent.h>
int main()
{
    struct dirent *d;
    DIR *dir;
    dir = opendir(".");
    if(dir!=NULL)
    {
        printf("List of Files & Subdirectories:-\n");
        while((d=readdir(dir))!=NULL)
            printf("%s\n", d->d_name);
        closedir(dir);
    }
    else
        printf("\nError occurred while opening the current directory!");
    getch();
    return 0;
}

