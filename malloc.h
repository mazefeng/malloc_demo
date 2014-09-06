#include<sys/types.h>
#include<unistd.h>

#ifndef __VC_MALLOC__
#define __VC_MALLOC__

struct s_block{
    size_t size;
    struct s_block *next;
    struct s_block *prev;
    int free;
    void *ptr;
    char data[1];
};

typedef struct s_block *t_block;

void *malloc(size_t size);
void *calloc(size_t number, size_t size);
void *realloc(void *p, size_t size);
void *reallocf(void *p, size_t size);
void free(void *p);

#endif
