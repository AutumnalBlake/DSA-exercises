#include <stdbool.h>
#define ALPHABET_SIZE 26

typedef struct trie_node *TrieNode;

struct trie_node {
    bool end;
    TrieNode children[ALPHABET_SIZE];
};

TrieNode TrieNew();
void TrieFree(TrieNode t);
TrieNode TrieInsert(TrieNode t, char *word);
void TrieShow(TrieNode t);