#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "trie.h"

int TrieNumMatches(TrieNode t, char *prefix) {
    // TODO
    return 0;
}

int main() {
    TrieNode t = TrieNew();

    TrieInsert(t, "APPLES");
    TrieInsert(t, "APPLE");
    TrieInsert(t, "APPLY");
    TrieInsert(t, "ABLE");
    TrieInsert(t, "ALE");
    TrieInsert(t, "BALE");

    TrieShow(t);

    assert(TrieNumMatches(t, "A") == 5);
    assert(TrieNumMatches(t, "APPLE") == 2);
    assert(TrieNumMatches(t, "ALTER") == 0);
  
    TrieFree(t);
}