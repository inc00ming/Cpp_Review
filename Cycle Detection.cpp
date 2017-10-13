/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
#include <unordered_set>
using namespace std;
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    int flag = 0;
    unordered_set<Node *> hash;
    while(head!=NULL){
        if(hash.find(head) != hash.end()){
            flag = 1;
            break;
        }
        hash.insert(head);
        head = head->next;
    }
    return flag;
}

