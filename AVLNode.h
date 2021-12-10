//
// Created by hloi on 12/6/2021.
//

#ifndef CSC211CH11AVLEXAMPLE_AVLNODE_H
#define CSC211CH11AVLEXAMPLE_AVLNODE_H

#include <sstream>
template<typename Item_Type>
struct AVLNode : public BTNode<Item_Type> {
    enum balance_type {LEFT_HEAVY = -1, BALANCED= 0, RIGHT_HEAVY = 1};
    balance_type balance;

    AVLNode(const Item_Type& the_data, BTNode<Item_Type>* left_val = NULL,
            BTNode<Item_Type>* right_val = NULL) : BTNode<Item_Type>(the_data, left_val, right_val),
                    balance(BALANCED) {

    }

    virtual ~AVLNode() {}

    virtual std::string to_string() const {
        std::ostringstream os;
        os << balance << " : " << this->data;
        return os.str();
    }

};


#endif //CSC211CH11AVLEXAMPLE_AVLNODE_H
