#ifndef H_GRAPH_H_
#define H_GRAPH_H_

#include "state.h"
#include "../../nauty26r7/nauty.h"

int edges_of (graph g[MAXN*MAXM], int n, int m);

void diagonal (graph g[MAXN*MAXM], int n, int m);

void init_avail_calls_graph (graph g[MAXN*MAXM], int n, int m);

void copy_graph(graph to[MAXN*MAXM],graph from[MAXN*MAXM],int n, int m);

void find_can_label(graph from[MAXN*MAXM], graph to[MAXN*MAXM], int n);
	
void update_secrets(graph g[MAXN*MAXM], int i, int j, int n);

int no_poss_calls(pstate_t * pstate, int i, int j, int prot, int n);

int can_call(graph g[MAXN * MAXM], int i, int j, int n);

void print_graph(graph g[MAXN*MAXM], int n, int m);

void can_label_calls(int init_calls[MAXN][MAXN],
graph can_calls[MAXN*MAXM], int n);

void print_calls_graph(int calls[MAXN][MAXN], int n);

void init_calls_graph(int calls[MAXN][MAXN], int n);

#endif /* H_GRAPH_H_ */
