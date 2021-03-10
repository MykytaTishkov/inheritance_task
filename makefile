.PHONY: clean
prog_cpp: cpp_inher.cpp
	g++ $^ -o $@

clean:
	rm -f *.o