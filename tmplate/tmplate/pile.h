#pragma once
#include "node.h"

template <class t>


class Pile
{

private:

	node<t>* sommet;


public:


	Pile();
	~Pile();

	void push(node<t>* nd);
	void pop();
	bool is_empty()const;
	void print();
	void printstack();
	node<t>* som()const;


};

template<class t>
Pile<t>::Pile()
{

	this->sommet = nullptr;


}

template<class t>
Pile<t>::~Pile()
{

	while (!this->is_empty())
	{
		this->pop();
	}

}

template<class t>
void Pile<t>::push(node<t>* nd)
{

	nd->next = this->sommet;
	this->sommet = nd;

}

template<class t>
void Pile<t>::pop()
{

	if (!this->is_empty()) {
		node<t>* tmp = this->sommet;
		this->sommet = this->sommet->next;
		delete tmp;
	}


}

template<class t>
bool Pile<t>::is_empty() const
{
	return (this->sommet == nullptr);
}

template<class t>
void Pile<t>::print()
{
	node<t>* tmp = this->sommet;

	while (tmp != nullptr)
	{

		tmp->aff();
		tmp = tmp->next;

	}


}

template<class t>
void Pile<t>::printstack()
{




	node<t>* tmp = this->sommet;
	Pile<t> newpile;



	while (tmp != nullptr)
	{

		tmp->aff();
		this->sommet = this->sommet->next;
		
		newpile.push(tmp);

		tmp = this->sommet;

	}

	

	tmp = newpile.sommet;
	
	/*
	int i = 0;
	while (tmp != nullptr)
	{
		std::cout << "new pile ["<<i<<"]->";
		tmp->aff();
		tmp = tmp->next;
		i++;
	}
	*/

	while (tmp != nullptr)
	{
		newpile.sommet = newpile.sommet->next;
		this->push(tmp);
		tmp = newpile.sommet;
		
	}

}

template<class t>
node<t>* Pile<t>::som() const
{
	return this->sommet;
}
