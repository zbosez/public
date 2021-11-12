#include <string.h>
#include<stdio.h>
#include<stdlib.h>

typedef char DataType;
typedef struct Node
{
	DataType data;
	struct Node* leftChild;
	struct Node* rightChild;
}BiTreeNode;//��㶨��

void Initiate(BiTreeNode** root)
{
	*root = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	(*root)->leftChild = NULL;
	(*root)->rightChild = NULL;
}//��ʼ��

BiTreeNode* InsertLeftNode(BiTreeNode* curr, DataType x)
{
	BiTreeNode* s, * t;
	if (curr != NULL)
	{
		t = curr->leftChild;
		s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
		s->data = x;
		s->leftChild = t;
		s->rightChild = NULL;
		curr->leftChild = s;
		return curr->leftChild;
	}
}//�������

BiTreeNode* InsertRightNode(BiTreeNode* curr, DataType x)
{
	BiTreeNode* s, * t;
	if (curr != NULL)
	{
		t = curr->rightChild;
		s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
		s->data = x;
		s->rightChild = t;
		s->leftChild = NULL;
		curr->rightChild = s;
		return curr->rightChild;
	}
}//�Ҳ�����


void Destroy(BiTreeNode** root)
{
	if ((*root) != NULL && (*root)->leftChild != NULL)
	{
		Destroy(&(*root)->leftChild);
	}
	if ((*root) != NULL && (*root)->rightChild != NULL)
	{
		Destroy(&(*root)->rightChild);
	}
	free(*root);
}//����Destory����


BiTreeNode* DeleteLeftTree(BiTreeNode* curr)
{
	if (curr == NULL || curr->leftChild == NULL)
	{
		return NULL;
	}
	Destroy(&curr->leftChild);
	curr->leftChild = NULL;
	return curr;
}//��ɾ������


BiTreeNode* DeleteRightTree(BiTreeNode* curr)
{
	if (curr == NULL || curr->rightChild == NULL)
	{
		return NULL;
	}
	Destroy(&curr->rightChild);
	curr->rightChild = NULL;
	return curr;
}//��ɾ������

//ǰ��
void PreOrder(BiTreeNode* root)
{
	if (root == NULL)
		return;
	printf("%c ", root->data);
	PreOrder(root->leftChild);
	PreOrder(root->rightChild);
}
//����
void InOrder(BiTreeNode* root)
{
	if (root == NULL)
		return;
	InOrder(root->leftChild);
	printf("%c ", root->data);
	InOrder(root->rightChild);
}
//����
void PostOrder(BiTreeNode* root)
{
	if (root == NULL)
		return;
	InOrder(root->leftChild);
	InOrder(root->rightChild);
	printf("%c ", root->data);
}
void main()
{
	BiTreeNode* root, * p;
	Initiate(&p);
	p->data = '#';
	InsertLeftNode(p, 'A');
	InsertLeftNode(p, 'B');
	InsertLeftNode(p, 'D');
	InsertRightNode(p, 'G');
	InsertRightNode(p, 'C');
	InsertLeftNode(p, 'E');
	InsertRightNode(p, 'F');
	PreOrder(p);
	printf("\n");
	InOrder(p);
	printf("\n");
	PostOrder(p);
	printf("\n");
}
