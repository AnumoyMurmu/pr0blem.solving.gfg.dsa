vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>pre;
  Node*cur=root;
  while(cur!=NULL){
      if(cur->left==NULL){
          pre.push_back(cur->data);
          cur=cur->right;
      }
      else{
          Node*prev=cur->left;
          while(prev->right && prev->right!=cur ){
              prev=prev->right;
          }
          if(prev->right==NULL){
              prev->right=cur;
              pre.push_back(cur->data);
              cur=cur->left;
          }
          else{
              prev->right=NULL;
              cur=cur->right;
      }
  }
}
return pre;
  
}
