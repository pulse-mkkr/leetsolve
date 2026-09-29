//1290. Convert Binary Number in a Linked List to Integer

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            n=(n<<1)|temp->val;
            temp=temp->next;
        }
        
        return n;
    }
};
