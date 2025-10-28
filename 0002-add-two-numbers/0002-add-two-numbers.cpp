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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head_one=l1;
        ListNode *head_two=l2;
        ListNode *dummy_node= new ListNode();
        ListNode *head = dummy_node;
        int carry=0;
        int sum=0;
        while(head_one !=NULL || head_two != NULL || carry!=0){
            if(head_one != NULL){
                 sum += head_one->val;
                 head_one = head_one->next;
                 }
            if(head_two !=NULL ){
             
                 sum += head_two->val;
                 head_two = head_two->next;
                 }

            sum += carry;   
            carry = sum/10;
            int digit =sum%10;
            sum=0;
            ListNode *new_node = new ListNode(digit);
            dummy_node->next = new_node;
            dummy_node = dummy_node->next;
        }
        return head->next;
    }
};