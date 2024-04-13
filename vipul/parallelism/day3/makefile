CFLAGS := -I
CC := gcc
SOUTCES:= two.c three.c four.c
OBJECTS:=$(SOURCES:.c=.o)
EXECUTABLE:= myout

$(EXECUTABLE) : $(OBJECTS)
	$(CC) $(CFLAGS) -O $@ $(OBJECTS)
	
.c.o:
	$(cc) $(CFLAGS) -c -o $@ $<
	
clean:
	rm *.o myout
	
