all: compilar
compilar: Propiedad Reventa Fundador Propietario Admin view main
		g++ -o Salida Propiedad.o Reventa.o Fundador.o Propietario.o Admin.o View.o Main.o
Propiedad: Propiedad.cpp Propiedad.h 
		g++ -c Propiedad.cpp
Reventa: Reventa.cpp Reventa.h 
		g++ -c Reventa.cpp
Fundador: Fundador.cpp Fundador.h
	g++ -c Fundador.cpp
Propietario: Propietario.cpp Propietario.h Reventa.h Fundador.h Propiedad.h
	g++ -c Propietario.cpp
Admin: Admin.cpp Admin.h Propietario.h
	g++ -c Admin.cpp
view: View.cpp View.h Propietario.h
		g++ -c View.cpp
main: Main.cpp View.h 
	  g++ -c Main.cpp