# More singly linked lists

**void free_listint(listint_t *head)**

- This function iteratively frees up each node in the linked list by storing the head node in a temporary pointer variable `temp`, then moving on to the next node by updating the temp pointer, and finally freeing up the memory for the node pointed to by temp.
- This process is repeated until head address is NULL, which indicates the end of the linked list.

**void free_listint2(listint_t **head)**

- After freeing up all the nodes in the list, this function sets the head pointer to NULL using the * operator, which sets the value of the pointer it points to to NULL.
- This ensures that the head pointer no longer points to the freed memory, which could lead to undefined behavior if accessed later on.

**int pop_listint(listint_t **head)**

- This implementation checks if the *head is empty and returns a default value(0); Else, it saves the `value` of the 1st node and the pointer to the first node.
- It updates the header to point the second node (if any).
- At the end it frees the node, and returns the saved value.

**listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)**

- This function works by iterating through the linked list until it reaches the `node` at the given `index`, or until it reaches the end of the list (NULL) if the index is out of range.
- If the index is out of range, the function returns NULL.
- Otherwise, it returns a pointer to the node at the given index.

**int sum_listint(listint_t *head)**

- The function initializes a variable `sum` to 0.
- It then iterates through the linked list starting from the `head`.
- For each node in the list, it adds the data value in `n` field to the current sum and advances to the next node by setting the head pointer to point to the next node's address.
- This process continues until the head pointer reaches the end of the list (i.e., its value is NULL).
- Once the end of the list is reached, the final value of the sum variable is returned.

**int delete_nodeint_at_index(listint_t **head, unsigned int index)**

- The implementation checks for error conditions and returns -1 if the deletion was unsuccessful. It also initializes temp and del pointers and correctly handles the case when the node to be deleted is not the head node.
