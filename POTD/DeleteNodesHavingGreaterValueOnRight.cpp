// Given a singly linked list, remove all the nodes in the list which have any node on their right whose value is greater. (Not just immidiate Right , but entire List on the Right)

// Example 1:

// Input:
// LinkedList = 12->15->10->11->5->6->2->3
// Output: 15 11 6 3
// Explanation: Since, 12, 10, 5 and 2 are
// the elements which have greater elements
// on the following nodes. So, after deleting
// them, the linked list would like be 15,
// 11, 6, 3.
// Example 2:

// Input:
// LinkedList = 10->20->30->40->50->60
// Output: 60
// Explanation: All the nodes except the last
// node has a greater value node on its right,
// so all the nodes except the last node must
// be removed.


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node *reverse(Node *root)
    {
        Node* prev = NULL;
        Node* current = root;
        Node* next;
        
        while(current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        return prev;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        
        head = reverse(head);
        Node *current = head;
        int gv=head->data;
        Node *prev = head;
        head = head->next;
        
        while(head)
        {
            if(head->data >= gv)
            {
                gv=head->data;
                prev=head;
                head=head->next;
            }
            else{
                prev->next=head->next;
                head=prev->next;
            }
        }
        
        head=reverse(current);
        return head;
        
    }
    
};