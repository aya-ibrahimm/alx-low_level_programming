#ifndef lists_header_file_H
#define lists_header_file_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string for str
 * @next: points to the next node that we have
 *
 * Description: singly linked list project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* lists_header_file_H */
