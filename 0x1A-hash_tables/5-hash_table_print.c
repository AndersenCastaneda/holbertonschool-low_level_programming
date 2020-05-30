#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0, j = 0, size = 0;
	hash_node_t *node;

	if (!ht)
		return;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			j = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
