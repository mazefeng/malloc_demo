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
void free(void *p);

t_block extend_heap(t_block last, size_t size);
t_block find_block(t_block last, size_t size);
t_block get_block(void *p);
void split_block(t_block b, size_t size);
void copy_block(t_block src, t_block dst);

void *base = NULL;

#endif
