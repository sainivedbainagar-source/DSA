/*
LeetCode 143 - Reorder List
Difficulty: Medium

Approach: Find Middle + Reverse Second Half + Merge
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
    void reorderList(ListNode* head) {
        ListNode* ptr = head;
        ListNode* ptr1 = head;
        if (head == NULL || head->next == NULL)
          return;
        while( ptr1->next != NULL && ptr1->next->next != NULL){
            ptr = ptr ->next;
            ptr1 = ptr1->next->next;
        }
              ListNode* prev = NULL; 
                      
                      ListNode* curr = ptr->next;   
                   ListNode* next = NULL;   
       
        while( curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
       
        ptr->next = NULL;
           ptr = head;
     
        ListNode* x = prev;
        

        while( x != NULL  ){
         ListNode* y = ptr->next;
        ListNode* z = x->next;
         
         ptr->next = x;
         x->next = y;
         ptr = y;
         x = z;

        
        }
    
    }
};
