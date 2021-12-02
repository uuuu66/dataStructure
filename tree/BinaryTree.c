
#include "BinaryTree.h"
BTreeNode* MakeBTreeNode(void) {
	BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
BTData GetData(BTreeNode* bt) {
	return bt->data;
}
void SetData(BTreeNode* bt, BTData data) {
	bt->data = data;
}
BTreeNode* GetLeftSubTree(BTreeNode* bt) {
	return bt->left;
}
BTreeNode* GetRightSubTree(BTreeNode* bt) {
	return bt->right;
}
void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->left != NULL)
		free(main->left);
	main->left = sub;
}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	if (main->right != NULL)
		free(main->right);
	main->right = sub;
}
void InOrderTraverse(BTreeNode* bt, VisitFunc action) {

	if (!bt) {
		return;
	}
	InOrderTraverse(bt->left, action);
	action(bt);
	InOrderTraverse(bt->right, action);
}
void PreOrderTraverse(BTreeNode* bt, VisitFunc action) {
	if (!bt)
		return;
	action(bt);
	PreOrderTraverse(bt->left, action);
	PreOrderTraverse(bt->right, action);
}
void PostOrderTraverse(BTreeNode* bt, VisitFunc action) {
	if (!bt)
		return;
	PostOrderTraverse(bt->left, action);
	PostOrderTraverse(bt->right, action);
	action(bt);
}
void DeleteTree(BTreeNode* root) {
	if (root == NULL) {
		return;
	}
	DeleteTree(root->left);
	DeleteTree(root->right);
	free(root);
	root = NULL;
}
