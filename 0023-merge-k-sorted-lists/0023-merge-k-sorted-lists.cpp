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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>> nodes;

        // Add all nodes to the min_heap
        for(int i = 0; i < lists.size(); i++){
            if(lists[i] != nullptr){
                ListNode* j = lists[i];
                while(j != nullptr){
                    nodes.push({j-> val, j});
                    j = j -> next;
                }
            }
        }

        // If no nodes were added (in case the node list was empty to begin with), return early
        if(nodes.empty()){
            return nullptr;
        }
        
        // Push all nodes in a list
        vector<ListNode*> nodesList;
        while(!nodes.empty()){
            nodesList.push_back(nodes.top().second);
            nodes.pop();
        }
        
        // Reverse the list so it's sorted in ascending order
        reverse(nodesList.begin(), nodesList.end());
        
        // Make the next pointers point to the next node, except the last one that will point to null
        for(int i = 0; i < nodesList.size() -1; i++){
            nodesList[i] -> next = nodesList[i+1];
        }

        nodesList[nodesList.size() - 1] -> next = nullptr;
        return nodesList[0];
    }
};