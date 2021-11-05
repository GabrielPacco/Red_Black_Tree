//
//  main.cpp
//  Red_Black_Tree
//
//  Created by Gabriel on 5/11/21.
//

#include <iostream>
#include "RBTree.h"



int main(){
    RBTree Tree1;
    Tree1.insertValue(8);
    Tree1.insertValue(7);
    Tree1.insertValue(6);
    Tree1.insertValue(5);
    Tree1.insertValue(2);
    Tree1.insertValue(4);
    Tree1.insertValue(3);
    Tree1.insertValue(1);

    Tree1.inorder();

}
