# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        answer = []


        if not list1 and not list2:
            return None
        if not list1:
            return list2
        if not list2:
            return list1
        

                

        count = 1
        while list1 or list2:
            # print(f"=================count {count}====================")
            # print(f"list 1 is {list1.val} : list 2 is {list2.val}")
            count += 1
            if not list1:
                # print("case1")
                answer.append(list2.val)
                list2 = list2.next
                continue
            elif not list2:
                # print("case2")
                answer.append(list1.val)
                list1 = list1.next
                continue
            elif list1.val == list2.val:
                # print("case3")
                answer.append(list1.val)
                answer.append(list2.val)
                list1 = list1.next 
                list2 = list2.next
            elif list1.val > list2.val:
                # print("case4")
                answer.append(list2.val)
                list2 = list2.next
            elif list1.val < list2.val:
                # print("case5")
                answer.append(list1.val)
                list1 = list1.next
        
        if list1:
            answer.append(list1.val)
        if list2:
            answer.append(list2.val)

        head = None
        current = head

        for i in answer:
            if not head:
                head = ListNode()
                current = head
                current.val = i
            elif head:
                new = ListNode()
                new.val = i
                current.next = new
                current = current.next


                
            
        return head