# Trie Exercises
## TrieContains
Implement the function `TrieContains` in `trie_contains.c`.
The function takes a trie `t` and a word `word`, and returns whether `t` contains `word`.  

You may use any functions and definitions from `trie.h`, but you must not modify `trie.c`.

**Assumptions**
- `word` is a string containing only the characters `'A'` - `'Z'`

## TrieNumMatches
Implement the function `TrieNumMatches` in `trie_num_matches.c`.
The function takes a trie `t` and a string `prefix`, and returns the number of words in `t` with `prefix`. If there are no such words in `t`, return 0.

You may use any functions and definitions from `trie.h`, but you must not modify `trie.c`.

**Assumptions**
- `prefix` is a string containing only the characters `'A'` - `'Z'`
- A word is a prefix of itself, e.g. `"HELLO"` should be counted as a match if `prefix = "HELLO"`.

## TrieUnambiguousPrefix
Implement the function `TrieUnambiguousPrefix` in `trie_unambiguous_prefix.c`.
The function takes a trie `t` and a word `word`, and returns the length of the smallest unambiguous prefix of `word` in `trie`. If `word` is a prefix of other words in the trie, return the length of `word`.

That is, given the string $w$ of letters $w_1, w_2, \dots, w_n$, the function should return the smallest number $k$ where $w$ is the only string in `t` that starts with $w_1, w_2, \dots, w_k$, or $k = n$.

For example, if `word = "ABLE"` and `t` contains the words `"APPLES", "APPLE", "APPLY", "ABLE", "ALE"` and `"BALE"`, then 

You may use any functions and definitions from `trie.h`, but you must not modify `trie.c`.

**Assumptions**
- `prefix` is a string containing only the characters `'A'` - `'Z'`
- A word is a prefix of itself, e.g. `"HELLO"` should be counted as a match if `prefix = "HELLO"`.