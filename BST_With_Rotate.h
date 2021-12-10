//
// Created by hloi on 12/6/2021.
//

#ifndef CSC211CH11AVLEXAMPLE_BST_WITH_ROTATE_H
#define CSC211CH11AVLEXAMPLE_BST_WITH_ROTATE_H
#include "Binary_Search_Tree.h"

template<typename Item_Type>
class BST_With_Rotate : Binary_Search_Tree<Item_Type>{

protected:
    void rotate_right(BTNode<Item_Type>*& local_root) {
            BTNode<Item_Type>* temp = local_root->left; // point to new root
            local_root->left = temp->right;  // move right node to new location
            temp->right = local_root;  // change temp right point to the old node
            local_root = temp; // set temp to new root
    }

    void rotate_left(BTNode<Item_Type>*& local_root) {
        BTNode<Item_Type>* temp = local_root->left; // point to new root
        local_root->left = temp->right;  // move right node to new location
        temp->right = local_root;  // change temp right point to the old node
        local_root = temp; // set temp to new root
    }
};


#endif //CSC211CH11AVLEXAMPLE_BST_WITH_ROTATE_H
