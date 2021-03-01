#include "Python.h"
#include "iostream"

static PyObject* Operacion_Suma(PyObject * self, PyObject* args)
{
	float num1, num2;
	float resultado;
	/*if(!PyArg_ParseTuple(args,"ff",&num1,num2))
		return NULL;*/
	std::cout << "Ingrese un par de numeros separads por un espacio en blanco para sumar \n";
	std::cin >> num1;
	std::cin >> num2;
	resultado = num1 + num2;
	std::cout << "El resultado de la operacion es --> " << resultado;
	Py_RETURN_NONE;
	
}

static PyMethodDef OperacionesMethods[]=
{
 	{"sumar", Operacion_Suma,METH_VARARGS, "Suma dos numeros enteros"},
 	{NULL,NULL,0,NULL}
};


PyMODINIT_FUNC initOperaciones(void)
{
	(void)Py_InitModule("Operaciones", OperacionesMethods);
}
