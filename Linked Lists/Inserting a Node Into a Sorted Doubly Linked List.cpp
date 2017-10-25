/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
struct Node* SortedInsert(struct Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    struct Node* newNode = new (struct Node);
    newNode->data = data;
    if(head == NULL){
        newNode->prev = NULL;
        newNode->next = head;
        head = newNode;
        //cout << 1 << endl;
        return head;
    }
    Node* temp = head;
    while(temp->data < data){
        if(temp->next == NULL)
           break;
        temp = temp->next;
    }
    //cout << "Temp->data: " << temp->data << endl;
    if(temp == head){
        if(temp->data > data){
            newNode->next = head;
            newNode->prev = NULL;
            head = newNode;
            //cout << 2 << endl;
            return head;
        }
        else{
            newNode->next = head->next;
            newNode->prev = head;
            head->next = newNode;
            if(newNode->next != NULL)
                newNode->next->prev = newNode;
            return head;
        }
    }
    else if(temp -> next == NULL){
        if(temp->data < data){
            newNode->next = NULL;
            temp->next = newNode;
            newNode->prev = temp;
            //cout << 3 << endl;
        }
        else{
            newNode->next = temp;
            newNode->prev = temp->prev;
            newNode->prev->next = newNode;
            temp->prev = newNode;        
        }
        return head; 
    }
    else{
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        //cout << 4 << endl;       
        return head; 
    }
}

