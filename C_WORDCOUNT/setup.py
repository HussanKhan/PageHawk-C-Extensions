from distutils.core import setup, Extension

module = Extension("c_wordcount", sources = ["C_wordcounter_ext.c"])

setup(
	name = "c_wordcount",
	version = "1.0",
	description = "Returns word count",
	ext_modules = [module])