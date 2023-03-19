//InOrder traversal



struct Node
{
    int data;
    struct Node *left, *right;
};

Node *nNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printInOrder(struct Node *RootNode)
{
    if (RootNode == NULL)
        return;

    printInOrder(RootNode->left);
    cout << RootNode->data << " ";
    printInOrder(RootNode->right);
}


// PostOrder traversal


struct Node
{
    int data;
    struct Node *left, *right;
};

Node *nNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);

    cout << node->data << " ";
}




// PreOrder traversals


struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);
    printPreorder(node->right);
}
