#include "tree.h"

Tree::Tree()
    //: root(nullptr)
{

}

//void Tree::insertKey(int key,Node* leaf)
//{
//    if(key < leaf->key_value)
//    {
//        if(leaf->left!=nullptr)
//        {
//            insert(key, leaf->left);
//        }
//        else
//        {
//            leaf->left = new Node;
//            leaf->left->key_value = key;
//            leaf->left->left = nullptr;    //Sets the left child of the child Node to nullptr
//            leaf->left->right = nullptr;   //Sets the right child of the child Node to nullptr
//        }
//    }
//    else if(key>=leaf->key_value)
//    {
//        if(leaf->right!=nullptr)
//            insert(key, leaf->right);
//        else
//        {
//            leaf->right = new Node;
//            leaf->right->key_value = key;
//            leaf->right->left = nullptr;  //Sets the left child of the child Node to nullptr
//            leaf->right->right = nullptr; //Sets the right child of the child Node to nullptr
//        }
//    }
//}

//Tree::Node* Tree::search(int key, Node *leaf)
//{
//    if(leaf!=nullptr)
//      {
//        if(key==leaf->key_value)
//          return leaf;
//        if(key<leaf->key_value)
//          return search(key, leaf->left);
//        else
//          return search(key, leaf->right);
//      }
//      else return nullptr;
//}

//void Tree::destroyTree(Node *leaf)
//{
//    if(leaf != nullptr)
//    {
//        destroyTree(leaf->left);
//        destroyTree(leaf->right);
//        delete leaf;
//    }
//}

Tree::~Tree()
{
    //destroyTree();
}
