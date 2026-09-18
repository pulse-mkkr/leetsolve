//160. Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ta=headA;
        int la=1,lb=1;
        ListNode* tb=headB;
        while(ta->next!=NULL){//len cal
            la++;
            ta=ta->next;
        }
        while(tb->next!=NULL){
            lb++;
            tb=tb->next;
        }
        ta=headA;
        tb=headB;
        while(ta!=tb){//to make equal start
            if(la>lb){
                ta=ta->next;
                la--;
            }
            else if(lb>la){
                tb=tb->next;
                lb--;
            }
            else{
                ta=ta->next;
                tb=tb->next;
                la--;
                lb--;
            }
        }
        return ta;
    }
};
