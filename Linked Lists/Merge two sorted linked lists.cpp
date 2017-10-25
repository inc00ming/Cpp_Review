/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL && headB!=NULL)
        return headB;
    else if(headB == NULL && headA!=NULL)
        return headA;
    else{
        Node* res = NULL;
        if(headA->data < headB->data){
            res = headA;
            headA = headA ->next;
        }
        else{
            res = headB;
            headB = headB->next;
        }
        Node* fin = res;
        while(headA != NULL && headB != NULL){
            if(headA->data < headB->data){
                res -> next = headA;
                res = headA;
                headA = headA->next;
            }
            else{
                res -> next = headB;
                res = headB;
                headB = headB->next;
            }
        }
        if(headA == NULL)
            res->next = headB;
        else
            res->next = headA;
        return fin;
    }
}

