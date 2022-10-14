#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
    if(list2 == NULL){
        return list1;
    }
    if(list1 == NULL){
        return list2;
    }
    
    ListNode* s = new ListNode();
    if(list1->val < list2->val){
        s->val = list1->val;
        list1 = list1->next;
    }
    else{
        s->val = list2->val;
        list2 = list2->next;
    }
    ListNode* t = s;
    while(list1 != NULL && list2 != NULL){
        int data;
        if(list1->val < list2->val){
            data = list1->val;
            list1 = list1->next;
        }
        else{
            data = list2->val;
            list2 = list2->next;
        }
        t->next = new ListNode(data);
        t = t->next;
    }
    
    if(list1 == NULL){
        while(list2 != NULL){
            t->next = new ListNode(list2->val);
            t = t->next;
            list2 = list2->next;
        }
    }
    if(list2 == NULL){
        while(list1 != NULL){
            t->next = new ListNode(list1->val);
            t = t->next;
            list1 = list1->next;
        }
    }
    
    return s;
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size() == 0){
        return NULL;
    }
    while(lists.size() > 1){
        ListNode* merged = mergeTwoLists(lists[0], lists[1]);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
        lists.push_back(merged);
    }        
            
    return lists[0];            
}

int main(){

    int n;
    cin >> n;
    if(n == 0){
        return 0;
    }
    vector<ListNode*> lists;
    for(int i=0; i<n; i++){
        ListNode* temp = new ListNode();
        ListNode* t = temp;
        int x;
        cin >> x;
        if(x == 0){
            continue;
        }
        else{
            for(int j=0; j<x; j++){
                if(j == 0){
                    cin >> t->val;
                }
                else{
                    ListNode* t1 = new ListNode();
                    cin >> t1->val;
                    t->next = t1;
                    t = t->next;
                }
            }
        }
        lists.push_back(temp);
    }

    ListNode* merged = mergeKLists(lists);

    while(merged != NULL){
        cout << merged->val;
        if(merged->next != NULL){
            cout << ",";
        }
        merged = merged->next;
    }
    return 0;
}