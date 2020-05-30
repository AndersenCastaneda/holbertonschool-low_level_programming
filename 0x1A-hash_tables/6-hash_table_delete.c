#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			node = temp;
			free(node->key);
			free(node->value);
			temp = temp->next;
			free(node);
		}
	}

	free(ht->array);
	free(ht);
}
