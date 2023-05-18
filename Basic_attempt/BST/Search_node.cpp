bool search(struct Node* root, int value) {
    while (root != NULL)
    {
      if (value > root->data)
	root = root->right;

      else if (value < root->data)
	root = root->left;

      else
	return 1;
    }

  return 0;
}
