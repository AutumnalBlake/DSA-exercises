#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"

int TrieUnambiguousPrefix(TrieNode t, char *word) {
    // TODO
    return -1;
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

    assert(TrieUnambiguousPrefix(t, "ABLE") == 2);
    assert(TrieUnambiguousPrefix(t, "APPLY") == 5);

    TrieFree(t);
}