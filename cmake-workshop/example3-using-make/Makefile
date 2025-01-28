all: gpp clang

gpp: 
	@echo "Compiling using g++"
	@echo -n 'Command: '
	g++ -o myprogramgpp main.cpp -I /usr/include/opencv4/ -lopencv_highgui -lopencv_imgcodecs -lopencv_core

clang: 
	@echo "Compiling using clang"
	@echo -n 'Command: '
	clang++ -o myprogramclang main.cpp -I /usr/include/opencv4/ -lopencv_highgui -lopencv_imgcodecs -lopencv_core



.PHONY clean:
	@rm -f myprogram*
