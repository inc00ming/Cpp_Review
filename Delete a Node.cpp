/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* temp = head;
    if (position==0){
        head = head->next;
        delete temp;
        return head;
    }
    else{
        while(position-1){
            temp = temp->next;
            position--;
        }
        Node* prev = temp->next;
        temp->next = prev->next
        delete prev;
        return head;
    }
}
