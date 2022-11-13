#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    char p[6];
    unlink("testFile.txt");
    int fd=open("testFile.txt",O_CREATE|O_RDWR);
    write(fd,"Lorem, ipsum",13);
    close(fd);
    // x=open("salam.txt",O_RDWR);
    // int y=read(x,p,6);
    // printf(1,"y=%d\n",y);
    change_file_size("testFile.txt",5);
    sleep(600);
    while (wait() != -1);
    change_file_size("testFile.txt",23);
    // x=open("salam.txt",O_WRONLY);
    // z=write(x,"zzzzzzzzz",10);
    // printf(1,"z=%d\n",z);

    exit();
}