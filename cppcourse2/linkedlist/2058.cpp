//2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,-1);
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        int idx21=-1,idx22=-1,idx11=-1,idx12=-1;
        int mind=INT_MAX;
        int n=1;
        while(c){//maxima
            if(a->val>b->val&&c->val>b->val||a->val<b->val&&c->val<b->val){
                if(idx21==-1)idx21=n;
                else idx22=n;
                idx11=idx12;
                idx12=n;
            }
            if(idx11!=-1) mind=min(mind,idx12-idx11);
            n++;
            a=a->next;
            b=b->next;
            c=c->next;  
        }
        if(idx22==-1)return ans;
        ans[1]=idx22-idx21;
        ans[0]=mind;
        return ans;
    }
};
