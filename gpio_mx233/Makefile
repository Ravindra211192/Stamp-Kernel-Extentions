CC  = $(CROSS_COMPILE)gcc

all: main


main: $(COMMON_OBJECTS) imx233.o
	$(CC)  $(LDFLAGS) $(COMMON_OBJECTS)imx233.c main.c  -I. -o main

.c.o:
	$(CC) -c $(CCFLAGS) $< -o $@

clean: 
	rm -f *.o maxq_io ${EXEC}

