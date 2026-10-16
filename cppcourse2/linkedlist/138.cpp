//138. Copy List with Random Pointer

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return head;
        //1 create deepcopy of next nodes
        Node* ans=new Node(-1);
        Node* trv=ans;
        Node* temp=head;
        while(temp){
            trv->next=new Node(temp->val);
            trv=trv->next;
            temp=temp->next;
        }
        Node* cnct=new Node(-1);//2.connect both lists
        Node* a=head;
        Node* b=ans->next;
        trv=cnct;
        while(a&&b){
            trv->next=a;
            a=a->next;
            trv=trv->next;
            trv->next=b;
            b=b->next;
            trv=trv->next;
        }
        a=cnct->next;//3.assign random
        while(a){
            b=a->next;
            if(a->random)b->random=a->random->next;
            a=b->next;
        }
        a=cnct->next;//4.disconnect ll's
        b=a->next;
        while(a){
            Node* nx=b->next;
            a->next=nx;
            if(nx)b->next=nx->next;
            a=nx;
            b=b->next;
        }
        return ans->next;
    }
};
