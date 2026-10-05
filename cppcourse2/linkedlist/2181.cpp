//2181. Merge Nodes in Between Zeros

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        int sum=0;
        ListNode* ans=new ListNode(-1);
        ListNode* ta=ans;
        while(temp){
            if(temp->val==0){
                if(sum!=0){
                    ta->next=new ListNode(sum);
                    ta=ta->next;
                    sum=0;
                }
            }
            sum+=temp->val;
            temp=temp->next;
        }
        return ans->next;
    }
};
