/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    
    Node* temp = head;
    if (position == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
        
    while(position-1){
        temp = temp->next;
        position--;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
    
}

