#include <dirent.h>
#include <stdio.h>
#include<string.h>

void Count_Files()
 {
     DIR *d;
    int File_Count=0;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
         
           File_Count++;
        }
        closedir(d);
    }
   printf("Number Of Files In Directory:%d\n",File_Count);
 }
int main()
{
Count_Files();
return(0);
}

