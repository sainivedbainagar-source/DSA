/*
LeetCode 141 - Linked List Cycle
Difficulty: Easy

Approach: [Your Approach]
Time Complexity: [Your Complexity]
Space Complexity: [Your Complexity]
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // we are using two pointers slow and fast 
       
        ListNode *slow = head;
        
        ListNode *fast = head;
        
        
        while(fast != NULL && fast->next != NULL){
                          slow = slow->next ;
              fast = fast->next->next;
        
              if(slow == fast)
              return true;
        }

      return false;   
    } 

};
