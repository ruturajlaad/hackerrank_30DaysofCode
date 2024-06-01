 Node* insert(Node *head,int data)
      {
          //Complete this method
          Node* newNode= new Node(data);
          
          if(head==NULL){
              return newNode;
          }
          Node* current=head;
          while(current->next!=NULL){
              current=current->next;
          }
          current->next=newNode;
          
          return head;
      }
