#include <iostream>;
#include "BinaryTree.h"
using namespace std;
void ShowData(BTData data);
int main(void) {
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
	MakeRightSubTree(bt2, bt4);
	cout << "중위 순회" << endl;
	InOrderTraverse(bt1,ShowData);
	cout<<"전위 순회"<<endl;
	PreOrderTraverse(bt1, ShowData);
	cout << "후위 순회" << endl;
	PostOrderTraverse(bt1, ShowData);
	
	return 0;
}
void ShowData(BTData data) {
	cout << data << endl;
}