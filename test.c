#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <stdint.h>

int main()
{
    char *bin_name = "data.txt";
    FILE *fp = fopen(bin_name, "rb");
    if (fp == NULL) {
        printf("%s not exist!\n", bin_name);
        return 1;
    }
    printf("open file success\n");
    return 0;
}
