#include "lists.h"
/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @str: string to put in the new node
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)

{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;
if (!head || !new_node)
return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node-str)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);
}
if (node)
{
while (node->next)
node = node->next;
node->next = new_node;
}
else
*head = new_mode;
return (new_node);
}
