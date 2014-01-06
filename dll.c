typedef struct { // DLLE : an Element of DLL
	DLLE *prev;
	DLLE *next;
	DLLE *sideprev;
	DLLE *sidenext;
	void *payload; 
} DLLE;
typedef struct { // DLL: Double Linked List
	int count;
	DLLE *head;
	DLLE *tail;
} DLL;