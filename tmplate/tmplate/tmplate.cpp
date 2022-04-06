#include <iostream>
#include "node.h"
#include "pile.h"


int main()
{


    node<int>* n1 = new node<int>(122);
    node<int>* n2 = new node<int>(20);
    node<int>* n3 = new node<int>(15);

    Pile<int>* pile1 = new Pile<int>();
    pile1->push(n1);
    pile1->push(n2);
    pile1->push(n3);

    
    std::cout << "avans supression " << "\n\n";

    std::cout << "print normale " << "\n";
    pile1->print();

    std::cout << "\nprint stack " << "\n";
    pile1->printstack();
    




    std::cout << "\napres supression " << "\n\n";
    pile1->pop();
    pile1->pop();
    pile1->pop();

    pile1->printstack();//nothing will apear 
   

}
