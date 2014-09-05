#include <stdio.h>
#include "malloc.h"

int main(int argc, char *argv[]){
    void *p = NULL;
    p = malloc(1024);
    if(p == NULL) printf("malloc fail\n");
    else printf("malloc success\n");
    return 0;
}
