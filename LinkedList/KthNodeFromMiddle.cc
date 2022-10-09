int Solution::solve(ListNode *A, int B)
{
    int count = 0;
    ListNode *slow = A;
    while (slow)
    {
        slow = slow->next;
        count++;
    }
    int mid = (count / 2) + 1;
    int pos = mid - B;
    if (pos <= 0)
        return -1;

    ListNode *temp = A;
    while (--pos)
    {
        temp = temp->next;
    }
    int result = temp->val;
    return result;
}
