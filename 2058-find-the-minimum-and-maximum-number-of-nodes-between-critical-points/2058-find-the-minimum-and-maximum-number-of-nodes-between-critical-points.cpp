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
class Solution{
public:
    vector<int>nodesBetweenCriticalPoints(ListNode*head){
        vector<int>a;
        int i=2;
        ListNode*prev=head;
        ListNode*curr=head->next;
        while(curr->next){
            if((curr->val>prev->val&&curr->val>curr->next->val)||
               (curr->val<prev->val&&curr->val<curr->next->val)){
                a.push_back(i);
            }
            prev=curr;
            curr=curr->next;
            i++;
        }
        if(a.size()<2){
            return{-1,-1};
        }
        int mn=INT_MAX;
        for(int i=1;i<a.size();i++){
            mn=min(mn,a[i]-a[i-1]);
        }
        int mx=a.back()-a[0];
        return{mn,mx};
    }
};