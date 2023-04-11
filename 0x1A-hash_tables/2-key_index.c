#include "hash_tables.h"
/**
 * key_index - function for locating the index of a key in an array
 * @key: the key for locating an index
 * @size: of the array of the hashtable
 * Return: returns the index in which the key value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
