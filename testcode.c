// test code 1a week 2 ltts

#include<stdio.h>

typedef struct complex {

float real;

float imag;

} complex;

void addnumbers(complex c1,complex c2, complex *result);
void subnumbers(complex c1,complex c2, complex *result);
void mulnumbers(complex c1,complex c2, complex *result);
void divnumbers(complex c1,complex c2, complex *result);

int main(){

complex c1,c2,result;

c1.real = 45;
c1.imag = 12;

c2.real = 15;
c2.imag = 14;

addnumbers(c1,c2,&result);
printf("Sum is\n");
printf("real %f\n", result.real);
printf("imag %f\n",result.imag);

subnumbers(c1,c2,&result);
printf("Difference is\n");
printf("real %f\n", result.real);
printf("imag %f\n",result.imag);

mulnumbers(c1,c2,&result);
printf("Product is\n");
printf("real %f\n", result.real);
printf("imag %f\n",result.imag);

divnumbers(c1,c2,&result);
printf("Division is\n");
printf("real %f\n", result.real);
printf("imag %f\n",result.imag);



}

void addnumbers(complex c1,complex c2, complex *result){

result->real =c1.real+c2.real;
result->imag =c1.imag+c2.imag;


}

void subnumbers(complex c1,complex c2, complex *result){

result->real =c1.real-c2.real;
result->imag =c1.imag-c2.imag;

}

void mulnumbers(complex c1,complex c2, complex *result){

result->real =c1.real*c2.real;
result->imag =c1.imag*c2.imag;
}

void divnumbers(complex c1,complex c2, complex *result){

result->real =c1.real/c2.real;
result->imag =c1.imag/c2.imag;

}
