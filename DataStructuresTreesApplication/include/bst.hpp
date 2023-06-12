/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* bst.hpp
**/



#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


class OrganNode{
	public:

	int data;
	OrganNode *left;
	OrganNode *right;
	

	OrganNode(const int& dt,OrganNode *lf=NULL,OrganNode *rg=NULL){
		data = dt;
		left = lf;
		right = rg;
	}
};


class BST{
	private:	
		OrganNode *root;
		
		void SearchAndAdd(OrganNode *&altNode,const int& newItem){
			if(altNode == NULL) altNode = new OrganNode(newItem);
			else if(newItem < altNode->data)
				SearchAndAdd(altNode->left,newItem);
			else if(newItem > altNode->data)
				SearchAndAdd(altNode->right,newItem);
			else return;
		}
		bool SearchAndDelete(OrganNode *&altNode,const int& data){
			if(altNode == NULL) return false;
			if(altNode->data == data) return DeleteNode(altNode);
			else if(data < altNode->data) return SearchAndDelete(altNode->left,data);
			else return SearchAndDelete(altNode->right,data);
		}
		bool DeleteNode(OrganNode *&altNode){
			OrganNode *delNode = altNode;
			
			if(altNode->right == NULL) altNode = altNode->left;
			else if(altNode->left == NULL) altNode = altNode->right;
			else{
				delNode = altNode->left;
				OrganNode *parent = altNode;
				while(delNode->right != NULL){
					parent = delNode;
					delNode = delNode->right;
				}
				altNode->data = delNode->data;
				if(parent == altNode) altNode->left = delNode->left;
				else parent->right = delNode->left;
			}
			delete delNode;
			return true;
		}
		void preorder(OrganNode *altNode){
			if(altNode != NULL){
				cout<<altNode->data<<" ";
				preorder(altNode->left);
				preorder(altNode->right);
			}
		}		

		void postorder(OrganNode *altNode){
			if(altNode != NULL){
				postorder(altNode->left);
				postorder(altNode->right);
				cout<<altNode->data<<" ";
			}
		}

		void inorder(OrganNode *altNode){
			if(altNode != NULL){
				inorder(altNode->left);
				cout<<altNode->data<<" ";
				inorder(altNode->right);
			}
		}

	
		int Height(OrganNode *altNode){
			if(altNode == NULL) return 0;
			return 1+max(Height(altNode->left),Height(altNode->right));
		}

		bool Search(OrganNode *altNode,const int& item){
			if(altNode == NULL) return false;
			if(altNode->data == item) return true;
			if(item < altNode->data) return Search(altNode->left,item);
			else return Search(altNode->right,item);
		}

		void PrintLevel(OrganNode *altNode,int level){
			if(altNode == NULL) return;
			if(level == 0) cout<<altNode->data<<" ";
			else{
				PrintLevel(altNode->left,level-1);
				PrintLevel(altNode->right,level-1);
			}
		}

		int ilkk(OrganNode *altNode) {
			return altNode->data;
		}

		bool isBalanced(OrganNode* altNode)                                   
		{
			int lh;
			int rh;
			if(altNode==NULL)
			return 1;
			lh = Height(altNode->left);                          
			rh = Height(altNode->right);
			if (abs(lh-rh) <=1 && isBalanced(altNode->left)
			&& isBalanced(altNode->right))
			return 1;
			return 0;
		}
	public:
		BST(){
			root = NULL;
		}
		bool isEmpty()const{
			return root == NULL;
		}
		bool Check(){
			return isBalanced(root);	                                   
		}
		int ilkkDugum(){
			return ilkk(root);                                          
		}
	
		void Delete(const int &data){
			if(SearchAndDelete(root,data) == false) throw "Item not found.";
		}

		void Add(const int& newItem){
			SearchAndAdd(root,newItem);
		}

		void preorder(){
			preorder(root);
		}

		void inorder(){
			inorder(root);
		}
		void postorder(){
			postorder(root);
		}

		void levelorder(){
			int h = Height();
			for(int level=0;level<=h;level++){
				PrintLevel(root,level);
			}
		}

		bool Search(const int& item){
			return Search(root,item);
		}
				
		int Height(){
			return Height(root);
		}

		void Clear(){
			while(!isEmpty()) DeleteNode(root);
		}
		~BST(){
			Clear();
		}
};


#endif
