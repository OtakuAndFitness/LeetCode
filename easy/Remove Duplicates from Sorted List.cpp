/**Given a sorted linked list, delete all duplicates such that each element appear only once. 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head==NULL){
            return NULL;
        }
        ListNode* previous=head;
        ListNode* point=head->next;
        while (point!=NULL){
            if (previous->val==point->val){
                ListNode* temp=point;
                point=point->next;
                previous->next=point;
                delete temp;
                continue;
            }
            previous=previous->next;
            point=point->next;
        }
        return head;
    }
};
