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

//algo
/*
## Algorithm (Swap Nodes in Pairs)

* If the linked list is empty or contains only one node, return the head because no swapping is possible.

* Create a pointer `left` that points to the first node of the current pair.

* Create a pointer `prevleft` to store the tail of the previously swapped pair. Initially, it is `NULL`.

* Create a pointer `res` to store the head of the final answer. Initially, it is `NULL`.

* Traverse the list while `left` is not `NULL`.

* Set another pointer `right = left` and move it `size - 1` (i.e., 1) step forward to check whether a complete pair exists.

* If `right` becomes `NULL`, it means there is only one node left.

  * Connect the last swapped pair with this remaining node.
  * If no pair was swapped, return the original head.
  * Stop the traversal.

* If a complete pair exists:

  * Store the starting node of the next pair using `nextleft = right->next`.
  * Reverse the current pair using the `reverse(left, 2)` function.
  * After reversal:

    * `right` becomes the new head of the swapped pair.
    * `left` becomes the tail of the swapped pair.

* If this is the first swapped pair:

  * Update `res = right` because the new head of the list has changed.

* Otherwise:

  * Connect the tail of the previous swapped pair (`prevleft`) to the new head (`right`) of the current swapped pair.

* Update `prevleft = left` because `left` is now the tail of the current swapped pair.

* Move `left` to `nextleft` to process the next pair.

* Repeat the same process until all pairs are processed.

* Finally, return `res`, which points to the head of the modified linked list.

### Time Complexity

* **O(n)** — Each node is visited a constant number of times.

### Space Complexity

* **O(1)** — Only a few pointer variables are used; no extra data structure is required.
 */