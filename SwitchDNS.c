#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("You must specify the DNS changing type !\n");
        printf("\t-l\tto local campus DNS\n");
        printf("\t-o\tto outer DNS\n");
    }
    if (strcmp(argv[1], "-l") == 0) {
        printf("Swith to local campus DNS\n");
        system("netsh interface ip set dns \"WLAN\" \"dhcp\"");
    } else if (strcmp(argv[1], "-o") == 0) {
        printf("Swith to outer DNS\n");
        system("netsh interface ip set dns \"WLAN\" static 114.114.114.114");
    } else {
        printf("Input the right argument !\n");
        printf("\t-l\tto local campus DNS\n");
        printf("\t-o\tto outer DNS\n");
    }

    return 0;
}
