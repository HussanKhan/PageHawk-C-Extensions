#include "Python.h"
#include <stdio.h>
#include <stdlib.h>
#include "wordstats.h"

//wrapper start
static PyObject* sentcounter(PyObject* self, PyObject* args) {
	char *text;
	int wc = 0;

	if (!PyArg_ParseTuple(args, "s", &text)) 
		return NULL;
	
	wc = sentencecount(text);
	return Py_BuildValue("i", wc);
	
};

//Mapping
static PyMethodDef myMethods[] = {
	{"sentcounter", sentcounter, METH_VARARGS, "Returns string of keywords"},
	{NULL, NULL, 0, NULL}
};

//module info
static struct PyModuleDef c_sentcount = {
	PyModuleDef_HEAD_INIT,
	"c_sentcount",
	"returns sentence count",
	-1,
	myMethods
};

//INIT

PyMODINIT_FUNC PyInit_c_sentcount(void) {
	return PyModule_Create(&c_sentcount);
};
