DOUBLY LINKED LISTS

0x17. C - Doubly linked lists
C
Algorithm
Data structure
 By: Julien Barbier

 Doubly linked lists are sequences of elements, each containing a reference to the previous and next elements

 Example 1


	struct node{
		struct node* prev;
		int data;
		struct node* next;
	};

To use a doubly linked list you could typically start with a reference to the Head or tail(optional).

Each elements in a doubly linked list has three things

1. Value
2. Next pointer
3. Previous pointer

For the project we will use the specified data structure👇🏿


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

TASK PROTOTYPES


TASK 0: Prototype: size_t print_dlistint(const dlistint_t *h);

TASK 1: Prototype: size_t dlistint_len(const dlistint_t *h);

TASK 2: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

TASK 3: Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

TASK 4: void free_dlistint(dlistint_t *head);

TASK 5: Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

TASK 6: Prototype: int sum_dlistint(dlistint_t *head);

TASK 7: Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

TASK 8: Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
