//2326. Spiral Matrix IV

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int maxrow=0;
        int lorow=m;
        int maxcol=n;
        int locol=0;
        while(head!=NULL){
            for(int i=locol;i<maxcol;i++){
                if(head==NULL)return ans;
                ans[maxrow][i]=head->val;
                head=head->next;
            }
            maxrow++;
            for(int i=maxrow;i<lorow;i++){
                if(head==NULL)return ans;
                ans[i][maxcol-1]=head->val;
                head=head->next;
            }
            maxcol--;
            for(int i=maxcol-1;i>=locol;i--){
                if(head==NULL)return ans;
                ans[lorow-1][i]=head->val;
                head=head->next;
            }
            lorow--;
            for(int i=lorow-1;i>=maxrow;i--){
                if(head==NULL)return ans;
                ans[i][locol]=head->val;
                head=head->next;
            }
            locol++;
        } 
        return ans;
    }
};
