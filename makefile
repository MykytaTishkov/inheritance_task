.PHONY: clean
prog_cpp: cpp_inher.cpp
	g++ $^ -o $@

prog_c: c_inher.c 
	gcc $^ -o $@

clean:
	rm -f *.o