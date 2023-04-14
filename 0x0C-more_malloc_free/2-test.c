alloc(unsigned int nmemb, unsigned int size)
 13 {
 14         int *n;
 15         unsigned int i;
 16
 17         if (nmemb == 0 || size == 0)
 18                 return (NULL);
 19
 20         n = malloc(nmemb * size);
 21         if (n == NULL)
 22                 return (NULL);
 23
 24         for (i = 0; i < size; i++)
 25         {
 26                 n[i] = 0; /*memory set to zero*/
 27         }
 return (n);
