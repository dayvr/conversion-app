IDIR =include
CC=gcc
CFLAGS=-I$(IDIR)

SDIR=src
ODIR=obj
LDIR =lib

LIBS=-lm

_DEPS = conversion.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o menu.o decimalConversion.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS) obj
	$(CC) -c -o $@ $< $(CFLAGS)

conversion: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

obj:
	@mkdir obj

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o 
	rm -f $(SDIR)/*~ $(INCDIR)/*~ 
	rm -f core conversion

