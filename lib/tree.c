/*tree.c*/

#include <search.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
	char *name;
	int mid;
	int end;
};

struct node *root = NULL;

int compare(const void *cp1, const void *cp2) {
	return strcmp(((struct node *)cp1)->name,
			((struct node *)cp2)->name);
}

void print_node(const void *nodeptr, VISIT order, int level) {
	if(order == preorder || order == leaf) 
		printf("\n name : %-10s, \n mid = %d, \n end = %d\n", 
			       (*(struct node **)nodeptr) -> name,
		      	       (*(struct node **)nodeptr) -> mid,
		        	(*(struct node **)nodeptr) -> end);	       
}
void main(){
	int i, j;
	int num;

	struct node **ret;

	printf("Enter the studentNum : ");
	scanf("%d", &num);

	char nameTable[num];
	struct node nodeTable[num];
	char *nameptr = nameTable;
	struct node *nodeptr = nodeTable;

	nodeptr = (struct node*)malloc(num * sizeof(struct node));



	for(i=0; i<num; i++) {
		printf("name : ");
		scanf("%s", nameptr);

		printf("mid score : ");
		scanf("%d", &nodeptr -> mid);

		printf("end score : ");
		scanf("%d", &nodeptr -> end);

		nodeptr -> name = nameptr;

		ret = (struct node**)tsearch((void*)nodeptr, (void **)&root, compare);
	       printf("%s님", (*ret) -> name);	
	       if(*ret == nodeptr) 
		       printf("트리에 추가 됨\n");
	       else 
		       printf("이미 트리에 존재\n");

	       nameptr +=strlen(nameptr)+1;
	       nodeptr++;
	}



	twalk((void*)root, print_node);

	free(nodeptr);
	
}
