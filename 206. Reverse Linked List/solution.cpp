#include<iostream>

using namespace std;


// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode *later, *lastNode = head;

        if (head != nullptr){
            later = head->next;
            head->next = nullptr;
            head = later;
        } else
            return head;

        while (head != nullptr){

            later = head->next;
            head->next = lastNode;
            lastNode = head;
            head = later;
        }

        return lastNode;
    }
};