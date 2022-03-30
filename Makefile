snow_3g: snow_3g.o
	g++ -std=c++14 -g -Wall -o snow_3g snow_3g.o

snow_3g.o: snow_3g.cc
	g++ -c snow_3g.cc

clean:
	rm *.o snow_3g