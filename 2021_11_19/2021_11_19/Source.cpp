#include"SeqList.h"
typedef char Datatype;
#define Maxsize 10
#define MaxVertices 10
#define MaxWeight 10000
typedef struct 
{
	SeqList Vertices; //��Ŷ����˳���
	int edge[MaxVertices][MaxVertices];	//��űߵ��ڽӾ���
	int numOfEdges;						//	�ߵ�����
}AdjMGraph;

typedef struct 
{
	int row;
	int col;
	int weight;
}RowColWeight;

void Initiate(AdjMGraph* G, int n)
{
	for(int i = 0;i<n;i++)
		for (int j = 0;j < n;j++) {
			if (i == j)
				G->edge[i][j] = 0;
			else
				G->edge[i][j] = MaxWeight;
		}
	G->numOfEdges = 0;
	ListInitiate(&G->Vertices);
}

//���붥��
void InsertVertex(AdjMGraph* G, DataType vertex) 
{
	ListInsert(&G->Vertices, G->Vertices.size, vertex);
}

//�����
void InsertEdge(AdjMGraph* G, int v1, int v2, int weight)
{
	if (v1 < 0 || v1 >= G->Vertices.size || v2 < 0 || v2 >= G->Vertices.size)
	{
		printf("����v1orv2Խ��\n");
		return;
	}
	G->edge[v1][v2] = weight;
	G->numOfEdges++;
}

//ɾ����
void DeleteEdge(AdjMGraph* G, int v1, int v2)
{
	if (v1 < 0 || v1 >= G->Vertices.size || v2 < 0 || v2 >= G->Vertices.size)
	{
		printf("����v1orv2Խ��\n");
		return;
	}
	G->edge[v1][v2] = MaxWeight;
	G->numOfEdges--;
}

//ȡ��һ���ڽӽڵ�
int GetFirstVex(AdjMGraph G, int v)
{
	if (v < 0 || v >= G.Vertices.size)
	{
		printf("����vԽ��\n");
		return -1;
	}
	for (int col = 0;col < G.Vertices.size;col++)
		if (G.edge[v][col] > 0 && G.edge[v][col] < MaxWeight)
			return col;
	return -1;
}

//ȡ��һ���ڽӽڵ�
int GetNextVex(AdjMGraph G, int v1,int v2)
{
	if (v1 < 0 || v1 >= G.Vertices.size || v2 < 0 || v2 >= G.Vertices.size)
	{
		printf("����v1orv2Խ��\n");
		return -1;
	}
	for (int col = v2+1;col < G.Vertices.size;col++)
		if (G.edge[v1][col] > 0 && G.edge[v1][col] < MaxWeight)
			return col;
	return -1;
}

void CreatGraph(AdjMGraph* G, DataType V[], int n, RowColWeight E[], int e)
{
	Initiate(G, n);
	for(int i = 0;i < n;i++)
		InsertVertex(G, V[i]);
	for (int k = 0;k < e;k++)
		InsertEdge(G, E[k].row, E[k].col, E[k].weight);
}

int main()
{
	AdjMGraph g;
	DataType a[] = { 'A','B','C','D','E' };
	RowColWeight rcw[] = { {0,1,10},{0,4,20},{1,3,30},{2,1,40},{3,2,50} };
	int n = 5, e = 5;
	CreatGraph(&g, a, n, rcw, e);
	DeleteEdge(&g, 0, 4);
	printf("����ļ���Ϊ��");
	for (int i = 0;i < g.Vertices.size;i++)
		printf("%c  ", g.Vertices.list[i]);
	printf("\n");
	printf("Ȩֵ����Ϊ:\n");
	for (int i = 0;i < g.Vertices.size;i++)
	{
		for (int j = 0;j < g.Vertices.size;j++)
			printf("%5d\t", g.edge[i][j]);
		printf("\n");
	}
	return 0;
}

