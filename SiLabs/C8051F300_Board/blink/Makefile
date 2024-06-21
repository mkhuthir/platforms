CC 			= sdcc
FLAGS 		=
SOURCEDIR 	= src/
BUILDDIR	= build/

all:
	mkdir -p $(BUILDDIR)
	$(CC) $(SOURCEDIR)*.c $(FLAGS) -o $(BUILDDIR)

clean:
	rm  $(BUILDDIR) -rf
