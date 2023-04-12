#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: key which cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *item;
	unsigned long int idx;

	/* Check for NULL hash table, key or value, and empty key */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	item = create_node(key, value);
	if (item == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	if (node == NULL)
	{
		ht->array[idx] = item;
		return (1);
	}

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		node = node->next;
	}

	item->next = ht->array[idx];
	ht->array[idx] = item;
	return (1);
}

/**
 * create_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * Return: new node on success, NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	/* Check for NULL key or value */
	if (key == NULL || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}
