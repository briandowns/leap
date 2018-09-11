CC ?= cc

BINARY := bin/leap

$(BINARY):
	$(CC) -o $(BINARY) leap.c

.PHONY: bench
bench: $(BINARY)
	$(BINARY)

.PHONY: clean
clean:
	rm -f $(BINARY)