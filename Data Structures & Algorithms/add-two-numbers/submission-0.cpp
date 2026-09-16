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
        ListNode* cur = l1;
        vector<int> stk1;
        vector<int> stk2;
        int first = 0;
        int x = 1;
        while(cur != NULL) {
            first += cur->val * x;
            cur = cur->next;
            x = x * 10;
        }

        int second = 0;
        int y = 1;
        ListNode* cur2 = l2;
        while(cur2 != NULL) {
            second += cur2->val * y;
            cur2 = cur2->next;
            y = y * 10;
        }

        cout << first << ":" << second << endl;
        string res = to_string(first + second);
        ListNode* answer = NULL;
        ListNode* current = NULL;
        for (int i = res.size() - 1; i >= 0; i-- ) {
            int digit = res[i] - '0';
            ListNode* temp = new ListNode(digit);

            if (answer == NULL) {
                answer = temp;
                current = answer;
            } else  {
                current->next = temp;
                current = current->next;
            } 
        }
        return answer;


    }
};
