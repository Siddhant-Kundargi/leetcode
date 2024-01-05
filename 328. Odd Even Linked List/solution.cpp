#include<iostream>
#include<vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *oddListHead = head, *oddListTail = head, *evenListHead = nullptr, *evenListTail = nullptr;

        if (head == nullptr)
            return nullptr;

        if (head->next == nullptr)
            return head;
        else { 
            evenListHead = head->next;
            evenListTail = evenListHead;
        }

        head = head->next->next;
        bool isEven = 0;

        while (head != nullptr)
            if(isEven){

                evenListTail->next = head;
                evenListTail = evenListTail->next;
                head = head->next;
                isEven = 0;
            } else {

                oddListTail->next = head;
                oddListTail = evenListTail->next;
                head = head->next;
                isEven = 1;
            }

        evenListTail->next = nullptr;
        oddListTail->next = evenListHead;

        return oddListHead;
    }
};