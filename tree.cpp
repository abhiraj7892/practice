class Node {
  public:
      Node (int d):data(d),left(NULL),right(NULL) { }
  private: 
      int data;
      class Node * left;
      class Node * right;
}Node;

class BST {
  public:
    BST (int data):root(new Node(10)) { }
    void insert()
  private:
}BST;

void BST::insert(int data)
{
  Node * node = root;
  while(node)
  {
    if(data < node->data)
    {
      if(node->left == NULL)
      {
        node->left = new Node(data);
        break;
      }
      else
        node=node->left;
    }
    else
    {
      if(node->right == NULL)
      {
        node->right = new Node(data);
        break;
      }
      else
        node=node->right;
    }
  }
}
