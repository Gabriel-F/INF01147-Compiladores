int i = 8;
int main(){
	int a;
	a = 36;
	int b = 4;
	
	int result;
	result = a/b;

	if( (a - 60) / 10 < b + result + 5 ){
		a = 0;
		return a;
	}

	return result;
}

/*
e1 : e2

ecx : edx

eax 

if exp 
	solve left (exp) -> ecx
		mov ecx
	solve right (exp) - > 
		mov edx
	do op idiv ecx, edx => eax

	idiv -16(%rbp)

a / b 

a ecx
b edx


mov ecx eax
idiv edx*/

