

all: recursives loops recursive loopd mains maindloop maindrec

loops: libclassloops.a

libclassloops.a: 
	gcc -fPIC -c basicClassification.c advancedClassificationLoop.c
	ar -rc libclassloops.a basicClassification.o advancedClassificationLoop.o
		
recursives: libclassrec.a

libclassrec.a:
	gcc -fPIC -c basicClassification.c advancedClassificationRecursion.c
	ar -rc libclassrec.a basicClassification.o advancedClassificationRecursion.o

recursive: libclassrec.so

libclassrec.so:
	gcc -shared basicClassification.o advancedClassificationRecursion.o -o libclassrec.so

loopd: libclassloops.so

libclassloops.so:
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so

mains: libclassloops.a
	gcc main.c -L. libclassloops.a -o mains

maindloop: libclassloops.so
	gcc main.c -L. libclassloops.so -o maindloop

maindrec: libclassrec.so
	gcc main.c -L. libclassrec.so -o maindrec

clean:
	rm -f basicClassification.o advancedClassificationRecursion.o advancedClassificationLoop.o 		libclassrec.a libclassloops.a libclassloops.so libclassrec.so mains maindloop maindrec
