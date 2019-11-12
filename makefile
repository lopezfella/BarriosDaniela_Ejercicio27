all: dt1_explicito.dat dt2_explicito.dat dt3_explicito.dat dt1_implicito.dat dt2_implicito.dat dt3_implicito.dat

%.dat: ejercicio27.x
	./ejercicio27.x

ejercicio27.x: ejercicio27.cpp
	c++ clase27.cpp -o ejercicio27.x

clean:
	rm -rf *.x *.dat
