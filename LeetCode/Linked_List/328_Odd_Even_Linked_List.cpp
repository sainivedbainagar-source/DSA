/*
LeetCode 328 - Odd Even Linked List
Difficulty: Medium

Approach: Odd-Even Pointer Reordering
Time Complexity: O(n)
Space Complexity: O(1)
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
    ListNode* oddEvenList(ListNode* head) {
        if( head == NULL || head->next == NULL)
        return head;
        ListNode* ptr = head;
        ListNode* ptr1 = head->next;
        ListNode* x = head->next;
        while( ptr1 != NULL && ptr1->next != NULL){
            ptr->next = ptr1->next;
            ptr = ptr->next;
            ptr1->next = ptr->next;
            ptr1 = ptr1->next;
        }
      ptr->next = x;
return head;
    }
};
