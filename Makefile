BINARIES := ii-map-timestamp
CC := c89-gcc -Wall

.PHONY: build install clean

build: $(BINARIES)

install:
	cp $(filter-out %.c,$(wildcard ./ii-*)) ~/bin/

clean:
	rm -f $(BINARIES)
