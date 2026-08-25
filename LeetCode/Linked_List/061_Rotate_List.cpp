/*
LeetCode 61 - Rotate List
Difficulty: Medium

Approach: Make Circular + Break at Correct Position
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
    ListNode* rotateRight(ListNode* head, int k) {
         if( head == NULL || head->next == NULL){
            return head;
         }
         ListNode* ptr = head;
         int c= 0;
         while( ptr != NULL){
            ptr = ptr->next;
            c++;
         }
       
             k = k%c;
         
        ptr = head;
   ListNode* ptr1 = head->next;
   int l = 1;
     while ( l != ( c-k)){
        ptr = ptr->next;
        ptr1 = ptr1->next;
         l++;
     }
     if( k == 0){
        return head;
     }
     ptr->next = NULL;
      ListNode* x = ptr1;
     while(ptr1->next != NULL)
     ptr1 = ptr1->next;
    
    ptr1->next = head;
    return x;


    }
};
