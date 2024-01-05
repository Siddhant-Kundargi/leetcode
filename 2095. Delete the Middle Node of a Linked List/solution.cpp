#include<iostream>
#include<vector>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        int counter = 0;
        ListNode* current = head;

        while (current != nullptr){
            counter++;
            current = current->next;
        }

        if (counter < 2)
            return nullptr;

        current = head;

        for (int i = 1; i < counter / 2; i++){
            
            current = current->next;
        }
        
        current->next = current->next->next;

        return head;
    }
};