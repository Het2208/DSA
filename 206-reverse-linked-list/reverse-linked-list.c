/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL){
        printf("List is empty");
        return head;
    }
    struct ListNode* save = head;
    struct ListNode* next = NULL;
    struct ListNode* prev = NULL;
    while(save != NULL){
        next = save->next;
        save->next = prev;
        prev = save;
        save = next;
    }
    return prev;
}