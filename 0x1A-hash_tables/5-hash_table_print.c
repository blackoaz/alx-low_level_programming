#include "hash_tables.h"
/**
 * hash_table_print -  function for printing a hash table
 * @ht: the hash table to be printed
 * Return: return a hash table or NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, flag = 0;


	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
