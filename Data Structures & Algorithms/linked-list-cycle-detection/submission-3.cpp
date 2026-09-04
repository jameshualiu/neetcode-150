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
    bool hasCycle(ListNode* head) {
        unordered_map<int, int> mp;
        ListNode* curr = head;
        if(curr == nullptr) return false;
        while(curr->next != nullptr) {
            if(mp.find(curr->next->val) != mp.end()) return true;
            mp[curr->next->val]++;
            curr->next = curr->next->next;
        }
        return false;
    }
};