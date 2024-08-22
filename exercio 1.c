#include <stdio.h> 
double soma(double n1,double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
int main(){
	printf("%.2f\n",soma(2,7));
	printf("%.2f\n",sub(3,2));
	printf("%.2f\n",div(10,2));
	printf("%.2f\n",mult(10,5));
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
