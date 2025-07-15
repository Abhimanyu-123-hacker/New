#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct treenode{
	int val;
	struct treenode*left;
	struct treenode*right;
} treenode;

// to create a node 
treenode*newnode(int val){
	treenode*node=(treenode*)malloc(sizeof(treenode));
	node->val=val;
	node->left=node->right=NULL;
	return node;
}
// to insert element in node
treenode* insert(treenode*root,int value){
	if(root==NULL){
	
	return newnode(value);
}
if(value<root->val)
	root->left=insert(root->left,value);

else{
	root->right=insert(root->right,value);
	return root ;
}
return root ;
}
void preorder(treenode*root){

if(root==NULL)
return;
printf("%d",root->val);
preorder(root->left);
preorder(root->right);
}
void inorder(treenode*root){
	if(root==NULL)
	return ;
	inorder(root->left);
	printf("%d",root->val);
	inorder(root->right);
	
}
void postorder(treenode*root){
	if(root==NULL)
	return ;
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->val);
	
}
int main(){
	int N;
	scanf("%d",&N);
	int values[N];
	for(int i=0;i<N;i++){
		scanf("%d",&values[i]);
	} 
	treenode*root=NULL;
	for(int i=0;i<N;i++){
		root=insert(root,values[i]);
	}
	preorder(root);
	printf("\n");
	
	inorder(root);
	printf("\n");
	
	
	postorder(root);
	printf("\n");
	return 0;
	}

