CC = gcc
CFLAGS = -Wall -g -fsanitize=address,leak,undefined

.PHONY: all
all: trie_contains trie_num_matches trie_unambiguous_prefix

trie_contains: trie_contains.c
	$(CC) $(CFLAGS) trie.c trie_contains.c -o trie_contains

trie_num_matches: trie_num_matches.c
	$(CC) $(CFLAGS) trie.c trie_num_matches.c -o trie_num_matches

trie_unambiguous_prefix: trie_unambiguous_prefix.c
	$(CC) $(CFLAGS) trie.c trie_unambiguous_prefix.c -o trie_unambiguous_prefix

.PHONY: clean
clean:
	rm -f trie_contains trie_num_matches trie_unambiguous_prefix
