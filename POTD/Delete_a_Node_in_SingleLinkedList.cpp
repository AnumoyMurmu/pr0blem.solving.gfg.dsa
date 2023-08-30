// Given a singly linked list and an integer x.Delete xth node from the singly linked list.

// Example 1:

// Input: 1 -> 3 -> 4 
//        x = 3
// Output: 1 -> 3
// Explanation:
// After deleting the node at 3rd
// position (1-base indexing), the
// linked list is as 1 -> 3. 
// Example 2:

// Input: 1 -> 5 -> 2 -> 9 
// x = 2
// Output: 1 -> 2 -> 9
// Explanation: 
// After deleting the node at 2nd
// position (1-based indexing), the
// linked list is as 1 -> 2 -> 9.

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if (!head) return NULL;
    
    if (x == 1) {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    Node *current = head;
    for (int i = 1; i < x - 1 && current->next != NULL; i++) {
        current = current->next;
    }
    
    if (current->next == NULL) {
        // Handle the case where x is out of bounds
        return head;
    }
    
    Node *temp = current->next;
    current->next = temp->next;
    free(temp);
    
    return head;

}