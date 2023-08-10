CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined

.PHONY: all
all: trie_contains

trie_contains: trie_contains.c
	$(CC) $(CFLAGS) trie.c trie_contains.c -o trie_contains

.PHONY: clean
clean:
	rm -f trie_contains
