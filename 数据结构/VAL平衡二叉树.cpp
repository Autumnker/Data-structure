#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  
#include <stdlib.h>  

//typedef int ElementType;
//
//// AVL���ڵ�Ķ���  
//typedef struct AVLNode {
//    ElementType data;
//    struct AVLNode* left;
//    struct AVLNode* right;
//    int height; // �ڵ�ĸ߶�  
//} AVLNode, * AVLTree;
//
//// ��ȡ�ڵ�߶�  
//int getHeight(AVLNode node) {
//    if (node == NULL) {
//        return 0;
//    }
//    return node->height;
//}
//
//// ��ȡƽ������  
//int getBalanceFactor(AVLNode node) {
//    if (node == NULL) {
//        return 0;
//    }
//    return getHeight(node->left) - getHeight(node->right);
//}
//
//// ��������  
//AVLNode rotateRight(AVLNode y) {
//    AVLNode x = y->left;
//    AVLNode T2 = x->right;
//
//    x->right = y;
//    y->left = T2;
//
//    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
//    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//
//    return x;
//}
//
//// ��������  
//AVLNode rotateLeft(AVLNode x) {
//    AVLNode y = x->right;
//    AVLNode T2 = y->left;
//
//    y->left = x;
//    x->right = T2;
//
//    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
//
//    return y;
//}
//
//// ����ڵ㲢���¸߶Ⱥ�ƽ�����ӣ����ܴ�����ת����  
//AVLNode insert(AVLNode node, ElementType data) {
//    // �����Ϊ�գ�����һ���½ڵ�  
//    if (node == NULL) {
//        return (AVLNode)malloc(sizeof(AVLNode));
//    }
//
//    // ���򣬵ݹ��½���  
//    if (data < node->data) {
//        node->left = insert(node->left, data);
//    }
//    else if (data > node->data) {
//        node->right = insert(node->right, data);
//    }
//    else {
//        // ��������Ѵ��ڣ��򲻲���  
//        return node;
//    }
//
//    // ���¸߶�  
//    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
//
//    // ��ȡƽ������  
//    int balance = getBalanceFactor(node);
//
//    // ����ڵ㲻ƽ�⣬�������ת  
//    if (balance > 1 && data < node->left->data) {
//        return rotateRight(node);
//    }
//    if (balance < -1 && data > node->right->data) {
//        return rotateLeft(node);
//    }
//    if (balance > 1 && data > node->left->data) {
//        node->left = rotateLeft(node->left);
//        return rotateRight(node);
//    }
//    if (balance < -1 && data < node->right->data) {
//        node->right = rotateRight(node->right);
//        return rotateLeft(node);
//    }
//
//    return node;
//}
//
//// �������������ڻ�ȡ�������еĽϴ�ֵ  
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//// �����������ڲ���AVL���Ĳ������  
//int main() {
//    AVLTree root = NULL;
//
//    // ����һЩ

/*�����û���Լ�д��*/
/*VALƽ�������*/
