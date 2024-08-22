#include <stdio.h> 
double soma(double n1,double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);

int main(){
	double valor1, valor2;
	char op;
	printf("escolha uma operacao:\n+ adicao\n- subtracao\n divisao\n multiplicacao\n");
	scanf("%c",&op);
	printf("digite o primeironemero:");
	scanf("%lf", & valor1);
	printf("digite o segundo numero:"),
	scanf("%lf",&valor2);
	if(op== '+'){
		printf("A soma é: %f.2",soma(valor1, valor2));
	}else if(op =='-'){
	printf("A subtracao é: %.2f",sub(valor1, valor2));
}else if(op =='/'){
	printf("A divisao é: %.2f",div(valor1, valor2));
}else if(op =='*'){
	printf("A multiplicacao é: %.2f",mult(valor1, valor2));
}
	return 0;
}
double sub(double n1, double n2){
	return n1 - n2;
}
double soma(double n1,double n2){
	return n1 + n2;
}
double div(double n1, double n2){
    return n1 / n2;
}
double mult(double n1, double n2){
	return n1 * n2;
}
