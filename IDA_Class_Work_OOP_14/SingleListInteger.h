#pragma once


//template <long long long_integer> 
//template <long long>
template <typename ANY>
class SingleListInteger
{	
	class Node
	{
		Node* _next = nullptr;
		//Node* _prev = nullptr;
		long long* _data = = nullptr;
	};
	Node* _head = nullptr;
	Node* _tail = nullptr;

public:
	void AddtoHead(long long new_item)
	{
		Node* new_node = new Node;
		
		// if 0 elements
		//_next = _prev = _head = _tail = this;
		_head = _tail = this;			
		_data = &new_item;
		
		
		// if >= 1 elements
		_head = this;
		_next = 
		_data = &new_item;


	}
	AddtoTail(long long);
	DeleteFromHead();
	DeleteFromTail();
	DeleteAll();
	Show();

};

//специализация шаблона для конкретных данных (bool)
template <>
class SingleListInteger <bool>
{

};


