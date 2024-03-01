all: clean compile run

compile: main.c 
	@echo "-------------------------------------------"
	@echo "Compiling..."
	@gcc -o test main.c -lm 	

run:
	@echo "-------------------------------------------"
	@echo "Running the tests...."
	@echo "================================================================================="
	./test
	@echo " "
	@echo "Completed tests...."

clean:
	@echo "-------------------------------------------"
	@echo "Removing compiled files..."
	@rm -f *.o
	clear
	