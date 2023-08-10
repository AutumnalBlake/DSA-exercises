#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"

TrieNode new_node() {
    TrieNode t = malloc(sizeof(*t));
    t->end = false;
    memset(t->children, 0, ALPHABET_SIZE * sizeof(TrieNode));
    return t;
}

int letter_to_index(char l) {
    return l - 'A';
}

int index_to_letter(int i) {
    return 'A' + i;
}

TrieNode TrieNew() {
    return new_node();
}

void TrieFree(TrieNode t) {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
      if (t->children[i]) TrieFree(t->children[i]);
    }
    free(t);
}

TrieNode trie_insert_r(TrieNode t, char *word, int pos) {
    if (t == NULL) t = new_node();
    
    if (word[pos] == '\0') {
      t->end = true;
    } else {
      int i = letter_to_index(word[pos]);
      t->children[i] = trie_insert_r(t->children[i], word, pos + 1);
    }

    return t;
}

TrieNode TrieInsert(TrieNode t, char *word) {
    for (int i = 0; word[i] != '\0'; i++) {
        assert(isalpha(word[i]));
        assert(isupper(word[i]));
    }

    return trie_insert_r(t, word, 0);
}

void trie_show_r(TrieNode t, int depth) {
    if (t == NULL) return;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (t->children[i] != NULL) {
            for (int j = 0; j < depth; j++)
                putchar(' ');
            putchar(index_to_letter(i));
            if (t->children[i]->end)
                printf(" (end)");
            putchar('\n');
            trie_show_r(t->children[i], depth + 1);
        }
    }
}

void TrieShow(TrieNode t) {
    trie_show_r(t, 0);
}