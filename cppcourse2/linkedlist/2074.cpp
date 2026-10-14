//2074. Reverse Nodes in Even Length Groups

class Solution {
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
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp=head;
        int n=0,gap=0;
        ListNode* ans=new ListNode(-1);
        ListNode* anstrv=ans;
        while(temp){
            n++;
            temp=temp->next;
        }
        temp=head;
        while(gap+1<=n){
            ListNode* at=temp;
            if(gap%2==0){
                gap++;
                anstrv->next=temp;
                int trv=gap;
                while(trv--){
                    if(trv==0)anstrv=temp;
                    temp=temp->next;
                }
            }
            else {
                anstrv->next=reverseBetween(at,1,1+gap);
                gap++;
                anstrv=at;
                temp=at->next;
            }
            n-=gap;
        }
        if(n%2==0)anstrv->next=reverseList(temp);

        return ans->next;
    }
};
