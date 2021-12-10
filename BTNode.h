//
// Created by hloi on 11/15/2021.
//

#ifndef CSC211CH08BSTCUSTOMERS_BTNODE_H
#define CSC211CH08BSTCUSTOMERS_BTNODE_H

#include <sstream>

/** A node for a Binary Tree. */
template<typename Item_Type>
struct BTNode {
// Data Fields
    Item_Type data;
    BTNode<Item_Type> *left;
    BTNode<Item_Type> *right;

// Constructor
    BTNode(const Item_Type &the_data,
           BTNode<Item_Type> *left_val = NULL,
           BTNode<Item_Type> *right_val = NULL) :
            data(the_data), left(left_val), right(right_val) {}

// Destructor (to avoid warning message)
    virtual ~BTNode() {}

// to_string
    virtual std::string to_string() const {
        std::ostringstream os;
        os << data;
        return os.str();
    }
}; // End BTNode
// Overloading the ostream insertion operator
template<typename Item_Type>
std::ostream &operator<<(std::ostream &out,
                         const BTNode<Item_Type> &node) {
    return out << node.to_string();
}

#endif //CSC211CH08BSTCUSTOMERS_BTNODE_H
