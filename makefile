# build the library

install :
	python3 -m pip install .

uninstall :
	rm -rf build/
	rm easystats.cpython*.so

clean :
	rm -rf build/
	rm easystats.cpython*.so

