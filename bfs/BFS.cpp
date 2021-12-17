#include "BFS.hpp"
LT :: LT (int Vd,int peso){
	this->peso = peso;
	this->Vd = Vd;
}
int LT :: get_Vertice(){
	return Vd;//vertice destino
}
int LT :: get_peso() {
	return peso;//peso da aresta
}
BFS :: BFS(int N){
	this->N = N; // atribui o número de vértices
	LISTA = new list<LT>[N]; // cria as listas do tipo LT
}

BFS :: ~BFS(){}

void BFS :: Aresta_ADD(int Vi, int Vd,int b,int p){
	LT aux(Vd,p);
	LT auxV(Vi,p);
	if(b == 1)
	LISTA[Vi].push_back(aux);// adiciona vertice v1 ao vertices v2 e o peso
	else{
		LISTA[Vi].push_back(aux);
		LISTA[Vd].push_back(auxV);
	}
}

void BFS :: Busca_bfs(int v){
	queue<int> FILA;
	list<LT> :: iterator Prox;	
	bool visitou[N]; 
	for(int i = 0; i < N; i++){
        visitou[i] = false;//marca todo o vertor como falso
    }
	visitou[v] = true;//marca o primeiro como verdadeiro	
	FILA.push(v);//adiciona o vertice a ser passado
	int vertice;
	while(true){
		v = FILA.front();// pega o primeiro da fila para ser imprimida 
		cout << (v+1) <<endl;
		FILA.pop(); 
		for(Prox = LISTA[v].begin(); Prox != LISTA[v].end(); Prox++){
			vertice = Prox->get_Vertice();
			if(visitou[vertice ] == false){//verifica se o vertice foi visitado
				visitou[ vertice ] = true; 
				FILA.push(vertice);
			}
		}
		if (FILA.empty()){//se a fila for vazia o programa acaba
			break;
		}		
	}
}

