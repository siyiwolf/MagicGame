#A start makefile study
#Author    : siyiwolf(siyiwolf@foxmail.com)
#Creat Time: 20160821
#Update    :
#version   : V0.01


#Set sysmbol meaning
RM         = rm -rf 
JFLAGS     = -g
JDFLAG     = -d
JDSTPATH   = classfile/
JSFLAG     = -s
JSRCPATH   = src/
JCC        = javac
ORIJAVA    = src/*.java
TRFCLASS   = *.class

$(TRFCLASS):$(ORIJAVA)
	$(JCC) $(JFLAGS) $(JDFLAG) $(JDSTPATH) $(ORIJAVA)

clean:
	$(RM) classfile/*.class
