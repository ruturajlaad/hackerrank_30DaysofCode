
          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            if(head==NULL){return head;}
            
            Node *current = head;
            
            while((current!=NULL) &&(current->next!=NULL)){
                if(current->data==current->next->data){
                    Node *nextNext=current->next->next;
                    delete current->next;
                    current->next=nextNext;
                }
                else{
                    current=current->next;
                }
            }
            return head;
            
          }
