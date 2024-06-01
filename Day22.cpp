int getHeight(Node* root){
          //Write your code here
          if(root==NULL){
              return -1;
          }
          int lefth= getHeight(root->left);
          int righth=getHeight(root->right);
          
          return 1+ max(lefth,righth);
        }
