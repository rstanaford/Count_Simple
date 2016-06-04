CC=cc
CFLAGS=-Wall -g -std=gnu99

LIBS=-lncurses -lm
MYLIBS=

INCDIR=../inc
OBJDIR=../obj
BINDIR=../bin
TARGET=Countsimple


_DEPS =
DEPS = $(patsubst %,$(INCDIR)/%,$(_DEPS)) 

_OBJS = countsimple.o
OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))




$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

build: $(OBJS)
	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $^ $(LIBS) $(MYLIBS)



.PHONY: clean

clean:
	rm -f $(BINDIR)/$(TARGET) $(OBJDIR)/*



