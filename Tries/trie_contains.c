#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "trie.h"

bool TrieContains(TrieNode t, char *word) {
    // TODO
    return false;
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

    assert(TrieContains(t, "APPLES"));
    assert(!TrieContains(t, "ALES"));
  
    TrieFree(t);
}