from distutils.core import setup, Extension

module = Extension("c_sentcount", sources = ["C_sentcounter_ext.c"])

setup(
	name = "c_sentcount",
	version = "1.0",
	description = "Returns sentence count",
	ext_modules = [module])