#include "hash_tables.h"
/**
 *key_index - gives you the index of a key
 *@key: store or look up a value in a hash table
 *@size: size of the array of the hash table
 *Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
