//725. Split Linked List in Parts

class Solution {
    ListNode* part(ListNode* head,int len){
        int n=0;
        ListNode* temp=head;
        ListNode* ans=head;
        while(head!=NULL&&n<len){
            temp=temp->next;
            n++;
        }
        return temp;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        vector<ListNode*>ans(k,NULL);
        if(n==0)return ans;
        temp=head;
        if(n<=k){
            for(int i=0;i<k;i++){
                ListNode* nex=NULL;
                if(temp)nex=temp->next;
                else break;
                temp->next=NULL;
                ans[i]=temp;
                temp=nex;
            }
            return ans;
        }
        int xk=n%k;
        int ep=n/k;
        for(int i=0;i<k;i++){
            ListNode* nh=temp,*nex=NULL;
            if(xk){
                temp=part(temp,ep);
                xk--;
            }
            else temp=part(temp,ep-1);
            if(temp){
                nex=temp->next;
                temp->next=NULL;
                ans[i]=nh;
                temp=nex;
            }
            else ans[i]=nh;
        }
        return ans;
    }
};
