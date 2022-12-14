// 159. Code : Height of Binary Tree: For a given Binary Tree of integers, find and return the height of the tree.

/***********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (leftHeight > rightHeight)
    {
        return leftHeight + 1;
    }

    return rightHeight + 1;
}