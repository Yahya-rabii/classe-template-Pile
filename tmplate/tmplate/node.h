#pragma once
#include<iostream>
template<class t> class Pile;

template<class t>
class node
{
private:
	t data;
	node<t>* next;

public:

	friend class Pile<t>;

	node(t data1);
	~node();
	void aff();
};

template<class t>
node<t>::node(t data1)
{

	this->data = data1;
	this->next = nullptr;

}

template<class t>
node<t>::~node()
{

	std::cout << "le destructeur de la classe node " << "\n";


}

template<class t>
void node<t>::aff()
{

	std::cout << "data -> " << this->data << "\n";

}

