#define BinaryTree_H

typedef int BTData;
typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
}BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt,BTData data);
BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRigthSubTree(BTreeNode* bt);
void MakeRightSubTree(BTreeNode* Main, BTreeNode* sub);
void MakeLeftSubTree(BTreeNode* Main, BTreeNode* sub);
typedef void (*VisitFunc)(BTData data);

void InOrderTraverse(BTreeNode* bt,VisitFunc action);
void PreOrderTraverse(BTreeNode* bt, VisitFunc action);
void PostOrderTraverse(BTreeNode* bt, VisitFunc action);

