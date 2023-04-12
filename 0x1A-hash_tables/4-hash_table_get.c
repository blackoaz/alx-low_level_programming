#include "hash_tables.h"
/**
 * hash_table_get - function for retrieving a avalue associted with a key
 * @ht: the hash table you are looking into
 * @key: the key you are looking for
 * Return: returns null or value assocotaed with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
