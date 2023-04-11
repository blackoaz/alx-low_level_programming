#include "hash_tables.h"
/**
 * hash_table_create - function for creating a hash table
 * @size: the size of the array
 * Return: returns a pointer to a nwelly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	/*allocating memory for the table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	/*assigning the table size to the size parameter*/
	table->size = size;
	/*allocating memeory for the array based on the size*/
	table->array = malloc(sizeof(hash_table_t *) * size);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);

}
