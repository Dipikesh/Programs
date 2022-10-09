class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int count = 0;
        ListNode *ptr = head;
        while (ptr)
        {
            count++;
            ptr = ptr->next;
        }
        if (count == n)
            return head->next;
        count = count - n - 1;
        ptr = head;
        while (count--)
        {
            ptr = ptr->next;
        }

        ptr->next = ptr->next->next;

        return head;
    }
};