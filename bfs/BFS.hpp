#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <list>
#include <queue>

using namespace std;
class LT{	
	int peso;
	int Vd;
public:
	LT(int,int);
	int get_Vertice();
	int get_peso();
};
class BFS{
	int N; 
	list<LT> *LISTA;	
public:	
	BFS(int);
    ~BFS( );
	void Aresta_ADD(int, int,int,int); 
	void Busca_bfs(int);
};

#endif