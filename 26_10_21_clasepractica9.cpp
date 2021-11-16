// 26_10_21_clasepractica9.cpp 
// Juan Pablo Ríos
//Aqui se vera el uso de los punteros

#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int n, m;
	std::cin >> n >> m;
	int** arreglo = new int* [n];
	for (int i = 0; i < n; i++) 
	{
		arreglo[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arreglo[i][j] = rand() % 100;
			std::cout << "Valor " << "[" << i << "][" << j << "]: " << arreglo[i][j] << "    ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[]arreglo[i];
	}
	delete[]arreglo;

	/*
	int matriz1[2][3];
	int filas = (sizeof(matriz1) / sizeof(matriz1[0]));
	int columnas = (sizeof(matriz1[0]) / sizeof(matriz1[0][0]));

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << "por favor rellene los datos de la matriz 2*3, luego se le mostrara en que posicion fue asignado." << std::endl;
			std::cin >> matriz1[i][j];
			std::cout << "El numero ingresado fue guardado en el espacio: " << "[" << i << "][" << j << "] " << "= " << matriz1[i][j] << srd::endl;
		}
		std::cout << std::endl;
	}
	*/
	/*
	int edad = 20;
	int* apuntador_edad = &edad;

	std::cout << "El apuntador sin asterisco imprime: " << apuntador_edad << " Direccion de memoria apuntada." << std::endl;
	std::cout << "El apuntador con asterisco imprime: " << *apuntador_edad << " El valor de la direccion apuntada apuntada." << std::endl;
	std::cout << "El apuntador con Ampersand imprime: " << &apuntador_edad << " Direccion de memoria propia." << std::endl;
	*/
}