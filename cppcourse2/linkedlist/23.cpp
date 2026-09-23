//23. Merge k Sorted Lists

class Solution {
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* fans=new ListNode(-1);
        ListNode *ans=fans;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                ans->next=a;
                a=a->next;
                ans=ans->next;
            }
            else{
                ans->next=b;
                b=b->next;
                ans=ans->next;
            }
        }
        if(a==NULL)ans->next=b;
        else ans->next=a;
        return fans->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        while(lists.size()!=1){
            ListNode* a=lists[0];
            lists.erase(lists.begin());
            ListNode* b=lists[0];
            lists.erase(lists.begin());
            ListNode* c=merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};
