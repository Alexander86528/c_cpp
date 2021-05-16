#Change output_file_name.a below to your desired executible filename

# Set all your object files (the object files of all the .c files in 
# your project, e.g. main.o my_sub_functions.o )
OBJ = 9a-alphalist.o wordlist.o

# Set any dependant header files so that if they are edited they cause a 
# complete re-compile (e.g. main.h some_subfunctions.h 
# some_definitions_file.h ), or leave blank
DEPS = wordlist.h 

#Any special libraries you are using in your project or leave blank
# LIBS = -lbcm2835 -lrt
LIBS = 

#Set any compiler flags you want to use or leave blank
#CFLAGS = -lrt
CFLAGS = 

#Set the compiler you are using ( gcc for C or g++ for C++ )
CC = g++

#Set the filename extensiton of your C files (e.g. .c or .cpp )
EXTENSION = .c

#define a rule that applies to all files ending in the .o suffix, 
#which says that the .o file depends upon the .c version of the file 
#and all the .h files included in the DEPS macro.  Compile each object file
%.o: %$(EXTENSION) $(DEPS)
	$(CC) -c -o $@ $&lt; $(CFLAGS)

#Combine them into the output file
#Set your desired exe output file name here
9a-alphalist.a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

#Cleanup
.PHONY: clean

clean:
	rm -f *.o *~ core *~
