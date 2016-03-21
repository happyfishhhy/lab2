lab2 : lab2main.o BMI.o
	g++ -o lab2 lab2main.o BMI.o
lab2main.o : lab2main.cpp BMI.h
	g++ -c lab2main.cpp
BMI.o : BMI.cpp BMI.h
	g++ -c BMI.cpp
clean :	
	rm BMI.o lab2main.o
