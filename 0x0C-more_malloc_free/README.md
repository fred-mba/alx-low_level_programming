# More_malloc_free

### 0-malloc_checked.c

### 1-string_nconcat.c

### 2-calloc.c
- The function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory
- If nmemb or size is 0, then calloc() returns either NULL.
- If malloc fails, i.e malloc(nmem * size) -- would cause an overflow, then _calloc returns error/NULL
- In the code, *n = 0,the memory is set to zero

### 3-array_range.c
- Creates and returns a pointer to array of integers that contain values from `min` to `max`.

### 100-realloc.c

-The _realloc function reallocates the memory size block pointed to by ptr to size bytes. The contents remains unchanged in the range.If new_size > old_size, the “added” memory should not be initialized.

### 101-mul.c
