all: explicito.dat implicito.dat

%.dat: ejercicio27.x
	./ejercicio27.x

ejercicio27.x: ejercicio27.cpp
	c++ clase27.cpp -o ejercicio27.x

clean:
	rm -rf *.x *.dat
