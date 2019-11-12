grafica.png: grafica.py x1_explicito.dat dx2_explicito.dat dx3_explicito.dat dx1_implicito.dat dx2_implicito.dat dx3_implicito.dat
	python grafica.py 

%.dat: ejercicio27.x
	./ejercicio27.x

ejercicio27.x: ejercicio27.cpp
	c++ clase27.cpp -o ejercicio27.x

clean:
	rm -rf *.x *.dat
