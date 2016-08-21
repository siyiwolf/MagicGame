#Define sysbom

CC = gcc
CFLAG = -c
OFLAG = -o
SRCFILE = *.cpp
INCFILE = *.h
OBJFILE = *.o

main:$(OBJFILE)
        $(CC) $(OFLAG) main $(OBJFILE)
$(OBJFILE):$(SRCFILE) $(INCFILE)
        $(CC) $(OFLAG) $(SRCFILE)
