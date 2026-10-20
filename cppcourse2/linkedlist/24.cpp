//24. Swap Nodes in Pairs

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        int n=0;
        ListNode* temp=head;
        ListNode* ans=new ListNode(-1);
        ListNode* trv=ans;
        while(temp){
            n++;
            temp=temp->next;
        }
        temp=head;
        while(n&&n>1){
            trv->next=reverseBetween(temp,1,2);
            trv=temp;
            if(temp->next)temp=temp->next;
            n-=2;
        }
        return ans->next;
    }
private:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* fans=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return fans;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int n=1;
        while(temp){
            if(n==left-1)a=temp;
            if(n==left)b=temp;
            if(n==right)c=temp;
            if(n==right+1)d=temp;
            n++;
            temp=temp->next;
        }
        if(a)a->next=NULL;
        c->next=NULL;
        c=reverseList(b);
        if(a)a->next=c;
        else head=c;
        b->next=d;
        return head;
    }
};
