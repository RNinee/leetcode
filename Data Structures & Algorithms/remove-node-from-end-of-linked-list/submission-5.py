# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if not head.next:
            return None
        elif not head.next.next:
            if n == 2:
                return head.next
            else:
                head.next = None
                return head

        temp = head
        count = 1
        while temp.next:
            count += 1
            temp = temp.next
            
        
        if n == 1:
            current = head
            while current.next.next:
                current = current.next
            current.next = None
            return head
        elif n == count:
            return head.next
        
        n1 = head
        n2 = head.next
        n3 = head.next.next
        
        print(f"round: {count - n - 1}")
        for i in range(count - n - 1):
            n1 = n1.next
            n2 = n2.next
            n3 = n3.next
        
        print(n1.val)
        print(n2.val)
        print(n3.val)

        n1.next = n3

        return head




        
