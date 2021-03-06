
#ifndef SUB_MEMORY_H
#define SUB_MEMORY_H

#ifdef __cplusplus
extern "C"
{
#endif

void  sub_mem_init(void);
void  sub_mem_deinit(void);

void* sub_mem_malloc(size_t size, char* message);
void* sub_mem_calloc(size_t num, size_t size, char* message);
void* sub_mem_realloc(void *mem, size_t size, char* message);
void  sub_mem_free(void *mem, char* message);

#ifdef __cplusplus
}
#endif

#endif
