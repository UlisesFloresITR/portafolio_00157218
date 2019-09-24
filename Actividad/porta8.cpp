#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	float y = 0;
	float x = 5.7;
	float z;
	push(&unaPila, x);
	push(&unaPila, y);
	
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	pop(&unaPila, &x);
	cout << "x: " << x << endl;
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	
	while(!empty(&unaPila)){
		pop(&unaPila, &y);
		cout << "y:  " << y << endl;
	}
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	
	while(!empty(&unaPila)){
		pop(&unaPila, &z);
		cout << "z:  " <<z << endl;
	}
}