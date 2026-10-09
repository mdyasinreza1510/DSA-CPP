//24
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
#define Node ListNode

void reverse(Node* head,int times){
    Node* curr=head;
    Node* prev=NULL;
    while(times--){
        Node* nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return;
}

    ListNode* swapPairs(ListNode* head) {

        if (head == NULL) {
            return head;
        }
        Node* left = head;
        Node* right;
        Node* res = NULL;
        Node* prevleft = NULL;
        int size = 2;
        while (true) {
            right = left;
            for (int i = 0; i < size - 1; i++) {
                if (right == NULL) {
                    break;
                }
                right = right->next;
            }
            if (right) {
                Node* nextleft = right->next;
                reverse(left,size);
                if(prevleft){
                    prevleft->next=right;
                    
                }
                if(res==NULL){
                    res=right;

                }
                prevleft=left;
                left=nextleft;
                
            }else{
                if(prevleft){
                    prevleft->next=left;

                }
                if(res==NULL){
                    res=left;
                }

                break;
            }
        }
        return res;
    }
};