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
ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
          ListNode* next = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
    if(head == NULL || head->next == NULL)
            return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = reverse(slow);
        ListNode* first = head;
   while(second->next != NULL){ 
        ListNode* next1 = first->next;
        ListNode* next2 = second->next;

        first->next = second;
        second->next = next1;

        first = next1;
        second = next2;
    }
    }
};