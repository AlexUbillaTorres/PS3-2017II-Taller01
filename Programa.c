#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
//#include "csapp.h"

#define DEF_MODE   S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH
#define DEF_UMASK  S_IWGRP|S_IWOTH

int main()
{

int fd;

fd = open("prueba.txt", O_RDWR|O_CREAT, DEF_MODE);
write(fd,"prueba",6);

close(fd);

exit(0);

}


