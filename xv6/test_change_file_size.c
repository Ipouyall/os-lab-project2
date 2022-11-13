#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    char p[6];
    unlink("salam.txt");
    int x=open("salam.txt",O_CREATE|O_RDWR);
    int z=write(x,"asaasa",7);
    close(x);
    // x=open("salam.txt",O_RDWR);
    printf(1,"z=%d\n",z);
    // int y=read(x,p,6);
    // printf(1,"y=%d\n",y);
    printf(1,"%s\n",p);
    printf(1,"%d\n",x);
    printf(1,"check\n");
    change_file_size("salam.txt",10);
    // x=open("salam.txt",O_WRONLY);
    // z=write(x,"zzzzzzzzz",10);
    // printf(1,"z=%d\n",z);

    exit();
}