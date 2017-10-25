/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
#include<unordered_set>
using namespace std;
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    unordered_set<Node *> hash;
    while(headA != NULL){
        hash.insert(headA);
        headA = headA->next;
    }
    while(headB != NULL){
        if(hash.find(headB) != hash.end())
            break;
        else{
        hash.insert(headB);
        headB = headB->next;
        }
    }
    return headB->data;
}
