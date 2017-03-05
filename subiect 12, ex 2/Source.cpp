#include <iostream>
using namespace std;



struct nod{
	int nr;
	nod *urm;
};


struct lista{
	nod *varf, *cursor;
};

lista l1,l2;
int dim1,dim2;

void creaza(lista *l){
	l->varf = NULL;
	l->cursor = l->varf;
}


void introducere_elem(lista *l,int n){
		nod *f;
		f = new nod;
		f->nr = n;
		f->urm = l->varf;
		l->varf = f;
		l->cursor = l->varf;
		

}



void citire(lista *l){
	int n;
	cout << "Introduceti un nr, pt terminare introduceti 0" << endl;
	cin >> n;
	while(n!=0){
		introducere_elem(l,n);
		cout << "Alt:" << endl;
		cin >> n;
		
	}
}



int dim(lista *l){
	int n=0;
	nod *p;
	p = l->varf; 
	while(p!= NULL){
		p=p->urm;
		n++;
	}
	return n;
}

int main(){
	creaza(&l1);
	creaza(&l2);
	citire(&l1);
	citire(&l2);
	dim1=dim(&l1);
	cout << dim1 << endl;
	dim2=dim(&l2);
	cout << dim2 << endl;
	if(dim1>dim2){
		cout << "Lista 1 este mai mare ca lista 2"<<endl;
	}else{
		if(dim2>dim1){
			cout << "Lista 2 este mai mare ca lista 1"<<endl;
		}
		else{
			cout << "Listele sunt egale" << endl;
		}
	}

	system("pause");
	return 0;
}
