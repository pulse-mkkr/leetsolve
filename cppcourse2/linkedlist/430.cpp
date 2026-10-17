//430. Flatten a Multilevel Doubly Linked List

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp=head;
        while(temp){
            Node* nx=temp->next;
            if(temp->child==NULL){temp=temp->next;continue;}
            temp->next=flatten(temp->child);
            temp->child->prev=temp;
            Node* e=temp->child,*con=NULL;
            while(e){
                if(e->next==NULL)con=e;
                e=e->next;
            }
            con->next=nx;
            if(nx)nx->prev=con;
            temp->child=NULL;
            temp=temp->next;
        }
        return head;
    }
};
