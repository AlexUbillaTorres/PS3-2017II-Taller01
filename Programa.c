#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


#define DEF_MODE   S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH
#define DEF_UMASK  S_IWGRP|S_IWOTH

int main()
{

FILE *fp1;
char *archivo;
int fd;

fp1= fopen("configuracion.txt", "r"); 
fscanf(fp1, "%s", archivo);

fd = open(archivo, O_RDWR|O_CREAT, DEF_MODE);

write(fd,"prueba",6);

close(fd);

exit(0);

}
