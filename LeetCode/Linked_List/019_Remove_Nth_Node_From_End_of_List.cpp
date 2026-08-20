/*
LeetCode 19 - Remove Nth Node From End of List
Difficulty: Medium

Approach: [Your Approach]
Time Complexity: [Your Complexity]
Space Complexity: [Your Complexity]
*/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head;
        ListNode *ptr1 = head;
        int c = 1;
        while(ptr->next != NULL){
            ptr =ptr->next;
            c++;
        }
         if(n == c) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int j = 1;
        while( j < (c-n)){
            ptr1 = ptr1->next;
          j++;
        }
        
            ListNode *temp = ptr1->next;
             ptr1->next = ptr1->next->next;
             delete temp;
            return head;
        
    }
};
