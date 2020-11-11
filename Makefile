CC = gcc
AR = ar
OBJECTS_MAIN = main.o
FLAGS = -Wall -g


all: mymathd mymaths mains maind 

mymaths: libmyMath.a
	
mymathd: libmyMath.so


libmyMath.a: power.o basicMath.o  
	$(AR) -rcs libmyMath.a power.o basicMath.o 	

libmyMath.so: power.o basicMath.o 
	$(CC) -shared -o libmyMath.so power.o basicMath.o 
	
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
	
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
	
	
	
main.o: main.c myMath.h                           
	$(CC) $(FLAGS) -c main.c
	
basicMath.o: basicMath.c myMath.h                   
	$(CC) $(FLAGS) -c basicMath.c
	
power.o: power.c myMath.h                        
	$(CC) $(FLAGS) -c power.c


.PHONY: clean 
	
clean: 
	rm -f *.o *.a *.so mains maind
	
