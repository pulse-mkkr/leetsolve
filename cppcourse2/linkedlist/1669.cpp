//1669. Merge In Between Linked Lists

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        a--;
        b--;
        while(a!=0){
            t1=t1->next;
            a--;
            b--;
        }
        ListNode* temp=t1->next;
        t1->next=list2;
        while(t2->next!=NULL)t2=t2->next;
        while(b>=0){
            b--;
            temp=temp->next;
        }
        t2->next=temp;
        return list1;
    }
};
