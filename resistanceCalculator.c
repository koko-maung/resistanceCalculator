/*Instructor-Professor Geiger
  Ko Ko Maung
  09/02/2018
  This program request V and 3 resistance value from user and derive the results for series, parallel and R2 & R3 in parallel condition.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double v;
	double resistor1, resistor2, resistor3;
	printf("Enter voltage source value (V): ");
	scanf("%lf", &v);
	printf("Enter three resistance values (ohms): ");
	scanf("%lf %lf %lf", &resistor1, &resistor2, &resistor3);
	printf("\n");
	printf("SERIES CIRCUIT\n");
	printf("Current through circuit %lf A \n", v / (resistor1 + resistor2 + resistor3));
	printf("Voltage across R1: %lf V \n", v / (resistor1 + resistor2 + resistor3) * resistor1);
	printf("Voltage across R2: %lf V \n", v / (resistor1 + resistor2 + resistor3) * resistor2);
	printf("Voltage across R3: %lf V \n\n", v / (resistor1 + resistor2 + resistor3) * resistor3);
	printf("PARALLEL CIRCUIT\n");
	printf("Voltage across each resistor: %lf V \n", v);
	printf("Current across R1: %lf A \n", v / resistor1);
	printf("Current across R2: %lf A \n", v / resistor2);
	printf("Current across R3: %lf A \n\n", v / resistor3);
	printf("R2 & R3 IN PARALLEL \n");
	printf("Voltage across R1: %lf V \n", (v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3)))) * resistor1);
	printf("Current across R1: %lf A \n", v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3))));
	printf("Voltage across R2: %lf V \n", v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3))) * ((resistor2 * resistor3) / (resistor2 + resistor3)));
	printf("Current across R2: %lf A \n", (v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3))) * ((resistor2 * resistor3) / (resistor2 + resistor3))) / resistor2);
	printf("Voltage across R3: %lf V \n", v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3))) * ((resistor2 * resistor3) / (resistor2 + resistor3)));
	printf("Current across R3: %lf A \n", (v / (resistor1 + ((resistor2 * resistor3) / (resistor2 + resistor3))) * ((resistor2 * resistor3) / (resistor2 + resistor3))) / resistor3);
	return 0;
}
