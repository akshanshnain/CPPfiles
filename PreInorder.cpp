BinaryTreeNode<int>* buildTreeHelper(int *pre , int *in , int preS , int preE , int inS , int inE){
    if(inS > inE){
        return NULL;
    }
    int rootData = pre[preS];
    int rootIndex = -1;
    for(int i = inS; i <= inE; i ++){
        if(in[i] == rootData){
            rootIndex = i;
            break;
        }
    }
    int lInS = inS;
    int lInE = rootIndex - 1;
    int lPreS = preS + 1;
    int lPreE = lPreS + lInE - lInS;
    int rInS = rootIndex + 1;
    int rInE = inE;
    int rPreS = lPreE + 1;
    int rPreE = preE;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root -> left = buildTreeHelper(pre , in , lPreS , lPreE , lInS , lInE);
    root -> right = buildTreeHelper(pre , in , rPreS , rPreE , rInS , rInE);
    return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
    buildTreeHelper(preorder , inorder , 0 , size - 1 , 0 , size - 1);
}