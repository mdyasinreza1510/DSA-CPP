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
    ListNode* reverseList(ListNode* head) {
        ListNode*  curr=head;//head cko current node banaye 
        ListNode*  prev=NULL; //head k peche wla null rhega 

        while(curr!= NULL){
            ListNode*  nex=curr->next; //next node ko save krliye 
            curr->next=prev; //cuurent k jo age hai  usko previous me daal diye 
            prev=curr; //aur previous ko aage badha diye 
            curr=nex; //aur yaha se curr ko age badha diye 
        }
        return prev; // sbse last wla el previous me store hogya hoga joki reverse k baad 1st pos. p hai 
        
    }
};