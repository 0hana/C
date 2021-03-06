//Zero Hanami (C) 2021: queue.c

#include "queue.h"

struct queue_node * queue_push(struct queue * const Q, size_t const Push) {
	if(!Q->Tail) {
		Q->Tail = (struct queue_node *)malloc(sizeof(struct queue_node));
		if(!Q->Tail) return NULL;
		Q->Head = Q->Tail;
	}
	else if(!(Q->Tail->Next = (struct queue_node *)malloc(sizeof(struct queue_node)))) return NULL;
	else Q->Tail = Q->Tail->Next;
	Q->Tail->Next = NULL;
	Q->Tail->Data = Push;
	return Q->Tail;
}

size_t queue_pop(struct queue * const Q) {
	if(!Q->Head) return -1;
	struct queue_node * H = Q->Head;
	Q->Head = Q->Head->Next;
	size_t Data = H->Data;
	free(H);
	if(Q->Tail == H) Q->Tail = NULL;
	return Data;
}

void queue_free(struct queue * const Q) {
	while(Q->Head) queue_pop(Q);
}
