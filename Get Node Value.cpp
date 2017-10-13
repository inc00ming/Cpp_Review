/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node* temp = head;
    while(head != NULL){
        temp = head;
        for(int i = 0; i<=positionFromTail; i++){
            temp = temp->next;
        }
        if(temp == NULL)
            break;
        else
            head = head->next;
    }
    return head->data;
}
