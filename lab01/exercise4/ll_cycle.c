#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    
    
    if(head == NULL) return 0;
    
    
	node *fast_ptr = head;
	node *slow_ptr = head;
	
	do{
		fast_ptr = fast_ptr->next;
		slow_ptr = slow_ptr->next;
		if(fast_ptr != NULL) 
			fast_ptr = fast_ptr->next;
	}while(slow_ptr != fast_ptr && fast_ptr != NULL);
	
	if(slow_ptr == fast_ptr) return 1;
    return 0;

}
