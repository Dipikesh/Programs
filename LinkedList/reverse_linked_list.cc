class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (!head || !head->next)
            return head;

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = head->next;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }
};