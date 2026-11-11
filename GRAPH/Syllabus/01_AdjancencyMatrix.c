#include<stdio.h>
#include<stdlib.h>

struct Graph{
    int V;
    int E;
    int **Adj;
};

int main()
{
    struct Graph *G=(struct Graph*)malloc(sizeof(struct Graph));
    int u,v;
    if(G==NULL)
    {
        printf("No Memory Allocated!!");
        return 0;
    }

    printf("Enter the no. of Nodes and Edges:");
        scanf("%d %d",&G->V,&G->E);

    G->Adj=malloc(sizeof(int)*(G->V * G->V));

    // matrix default Value to '0'
    for( u=0;u<G->V;u++)
    {
        for( v=0;v<G->V;v++)
        {
            G->Adj[u][v]=0;
        }
    }

    printf("Enter the no.s in pair for an edge:");

    for(int i=0;i<G->E;i++)
    {
        scanf("%d %d",&u,&v);
        G->Adj[u][v]=1;
        G->Adj[v][u]=1;
    }
    return 0;
}