from distutils.core import setup,Extension

modulo = Extension('Operaciones',sources=['modulo.cpp'])

setup(name = 'Operaciones',
      version = '1.0',
      description = 'Calculadora suma',
      ext_modules = [modulo]) 
