#include "BinaryTree.h"
void showdata(BTreeNode* data);
void main() {

	BTreeNode* bt1 = MakeBTreeNode();

	BTreeNode* bt2 = MakeBTreeNode();

	BTreeNode* bt3 = MakeBTreeNode();

	BTreeNode* bt4 = MakeBTreeNode();



	SetData(bt1, 1);

	SetData(bt2, 2);

	SetData(bt3, 3);

	SetData(bt4, 4);



	MakeLeftSubTree(bt1, bt2);

	MakeRightSubTree(bt1, bt3);

	MakeLeftSubTree(bt2, bt4);

	PreOrderTraverse(bt1, showdata); 
	DeleteTree(bt1);
	PreOrderTraverse(bt1, showdata); 
	return 0;
}

void showdata(BTreeNode* data)

{
	if (data)
		printf("%d ", data->data);
	else
		printf("NULL");
	printf("\n");

}