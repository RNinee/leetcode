# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        last = head
        arr = []
        arr.append(last)
        while last.next:
            last = last.next
            arr.append(last)

        head = arr[0]
        current = arr[0]

        first = 1
        end = len(arr) - 1

        while first <= end:
            print(f"first is {first} : end is {end}")
            if first == end:
                new = arr[first]
                current.next = new
                current = current.next
                
                # test.append(arr[first])
                # print(f"test is {test}")
                break
            else:
                new = arr[end]
                current.next = new
                current = current.next
                # test.append(arr[end])
                end = end - 1

                new = arr[first]
                current.next = new
                current = current.next
                # test.append(arr[first])
                first = first + 1

        current.next = None
        return

        