#ifndef LISTA_H
#define LISTA_H
#include <cstddef>
#include <iostream>

template <typename T1, typename T2>
class Lista
{
    public:
        Lista();
        T2& addElement(T1);
        void printList();
        int getSize();
    protected:
    private:
        struct Node{
            Node *next;
            T1 key;
            T2 value;
        };
        Node *root;
};

template <typename T1, typename T2>
Lista<T1, T2>::Lista(){
    root = NULL;
}


template <typename T1, typename T2>
T2& Lista<T1, T2>::addElement(T1 t1){
    Node *newNode = new Node();
    newNode->key = t1;
    newNode->next = NULL;

    if(root==NULL){
        root = newNode;
        return root->value;
    }
    Node *t = root;

    while(t!=NULL){
        if(t->next==NULL){
            t->next = newNode;
            return t->next->value;
        }
        t=t->next;
    }

}

template <typename T1, typename T2>
void Lista<T1, T2>::printList(){
    Node *p = root;
    while(p!=NULL){
        std::cout << "[" << p->key << "]=>" << p->value << std::endl;
        p = p->next;
    }
}

template <typename T1, typename T2>
int Lista<T1, T2>::getSize(){
    int s = 0;
    Node *p = root;
    while(p!=NULL){
        s++;
        p = p->next;
    }

    return s;
}

#endif // LISTA_H
