/*
LeetCode 142 - Linked List Cycle II
Difficulty: Medium

Approach: Floyd's Cycle Detection (Fast & Slow Pointers)
Time Complexity: O(n)
Space Complexity: O(1)
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *ptr = head;
        ListNode *ptr1 = head;
       
       
   
        while(ptr1 != NULL && ptr1->next != NULL){
            ptr = ptr->next;
     
            ptr1 = ptr1->next->next;
            if( ptr == ptr1 ){
                ptr1 = head;
                 while( ptr != ptr1 ){
                    ptr =ptr->next;
                    ptr1 = ptr1->next;
                 }
                 return ptr1;
            } 
        }

          return NULL;
        
    }       
    
};
