IDIR =include
CC=gcc
CFLAGS=-I$(IDIR)

SDIR=src
ODIR=obj
LDIR =lib

LIBS=-lm

_DEPS = menu.h decimalConversion.h binaryConversion.h hexaConversion.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o menu.o decimalConversion.o binaryConversion.o hexaConversion.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

conversion: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

obj:
	@mkdir obj

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o 
	rm -f $(SDIR)/*~ $(INCDIR)/*~ 
	rm -f core conversion

