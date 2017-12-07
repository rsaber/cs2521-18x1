#include "list.h"

// Read questions.txt first

// ---------------------------------------
// QUESTION 1
link nodeFromEnd(link l, int k){
	// TODO: Your implementation here
}
// ---------------------------------------

// ---------------------------------------
// QUESTION 2
link reverse(link l){
	// TODO your implementation here
}
// ---------------------------------------


void printList (link list) {
	link curr = list;
	while (curr != NULL) {
		printf ("[%d]->", curr->item);
		curr = curr->next;
	}
	printf ("[X]\n");
}

int sumListItems (link ls) {
    link curr = ls;
    int sum = 0;
    while (curr != NULL) {
        sum += curr->item;
        curr = curr->next;
    }
    return sum;
}

void freeList(link list){
	link curr = list;
	link next;   
	while(curr!= NULL){
		next = curr->next;
		free(curr);
		curr = next;
	}
}

link fromTo (int start, int end) {
	int i;
	link list = NULL;
	link tail = NULL;
	for(i = start; i <= end; i++) {
		link n = newNode(i);   
		if(list == NULL)
			list = n;     
		else
			tail->next = n;
		tail = n;
	}
	return list;
}

link newNode(Item it)
	link newNode = malloc(sizeof(node));
	newNode->next = NULL;
	newNode->item = it;
	return newNode;
}

void printLink(link l){
	if(l==NULL) return;
	printf("[%d]\n",l->item);
}

link createListFromStr(char *string){
	link list = NULL;
	link end = NULL;
	
	for(int i=0; string[i]!='\0'; i++) {
		link new = newNode()
	}
}