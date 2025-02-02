#ifndef H_COMPAR_H_
#define H_COMPAR_H_

#define NEW_ITEM 1
#define DUPLICATE_ITEM 0

#define LESS -1
#define EQUAL 0
#define GREATER 1

int cmp_can_children_calls(const void* item1, const void* item2);

int cmp_can_calls(const void* item1, const void* item2);

int cmp_call_graphs(int c1[MAXN][MAXN], int c2[MAXN][MAXN], int n);

int cmp_can_children_secrets(const void* item1, const void* item2);

int cmp_fixed_name_children(const void* item1, const void* item2);

int cmp_graph_nodes(const void *p, const void *q);

int cmp_can_secrets(const void* item1, const void* item2);

int cmp_fixed_name_secrets(const void* item1, const void* item2);

int cmp_graphs(graph g1[MAXN*MAXM], graph g2[MAXN*MAXM], int n, int m);

#endif /* H_COMPAR_H_ */
