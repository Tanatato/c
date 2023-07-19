#include <sys/mman.h>

int main()
{
    int fd;
    char *start;
    char *buf;

    /*打开文件*/
    fd = open("/dev/mydev",O_RDWR);
    buf = (char *)malloc(PAGE_SIZE);
    memset()


    return 0;
}