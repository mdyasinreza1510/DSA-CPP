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
#define node ListNode
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL){
            return NULL;
        }
        node*last=head;
        int n=1;
        while(last->next!=NULL){
            n++;
            last=last->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        int count=1;
        node* t=head;
        while(t!=NULL){
            if(count==(n-k)){
                break;
            }
            count++;
            t=t->next;//n-k elemnts nikal liye 
        }
        last->next=head;
        node* res=t->next;//yahape t k next wala hi first me ayega qki t last elemnt after rotate hoga isiliye t k baad wala node ans hoga 
        t->next=NULL;//ans ko 1st me dalne k baad last node t k next me null daal denge qki wo last node hoga 
        return res;
       

        
    }

};