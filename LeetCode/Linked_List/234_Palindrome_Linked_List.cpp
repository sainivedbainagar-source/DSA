/*
LeetCode 234 - Palindrome Linked List
Difficulty: Easy

Approach: Fast & Slow Pointers + Reverse Second Half
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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr = head;
    ListNode* ptr1 = head;
    while( ptr1 != NULL && ptr1->next != NULL){
                ptr = ptr->next;
                ptr1 = ptr1->next->next;
    }
     ListNode* prev = NULL;
      ListNode* curr = ptr;
    ListNode* next =  NULL;

      ListNode* y = head;
     
    if( ptr1 == NULL){
    
 while( curr != NULL){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
    }

    }
    
   else
{    ListNode* curr = ptr->next;

    while( curr != NULL){
         next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
    }
    }
    while( prev != NULL){

        if( prev->val != y->val){
          return false;
        }
        prev = prev->next;
        y = y->next;
    }
      

return true;
    }
};
