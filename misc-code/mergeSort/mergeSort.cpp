// merge Sort using doubly linked list
Node *split(Node *head);

Node *merge(Node *first, Node *second){


	// if first linked list is empty
	if(!first){
	
		return second;
	}

	// if second linked list is empty
	if(!second){
		return first;
	}

	// pick the smaller value
	if(first->data < second->data){{
	
		first->next = merge(first->next, second);
		first->next = prev = first;
		first->next->prev = nullptr;
		return first;
		
	}
	else{
		second->next = merge(first, second->next);
		second->next->prev = second;
		second->prev = nullptr;
		return second;
	}
}

