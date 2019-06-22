**Tries**
- every node contains an array of node pointers
  - one for every letter in the alphabet + '\'
  - each element in the array points to another node
  - if that node is NULL, then that letter isn't the next letter of any word in that sequece
- every node indicates whether it's the last character of a word
```
typedef struct node
{
  bool is_word;
  struct node *children[27];
}
node;

node *root;
```

**Load**
- for every dictionary word, iterate through the trie
- each element in children corresponds to a different letter
- check the value at children[i]
  - if NULL. malloc a new node, have children[i] point to it
  - if not NULL, make to new node and continue
- if at end of word, set is_word to true
___
**Check**
- case insensitivity
- assume strings with only alphabetical characters and/or apostrophes
___
**Traversing linked lists**
```
node *cursor = head;

while(cursor != NULL)
{
  // do something
  cursor = cursor->next;
}
```

**Traversing a trie**
- for each letter in input word
  - go to corresponding element in children
    - if NULL, word is misspelled
    - if NULL, move to next letter
  - once at end of input word
    - check if is_word is true

**Freeing linked lists**
```
node *cursor = head;

while(cursor != NULL)
{
  node *temp = cursor;
  cursor = cursor->next;
  free(temp);
}
```

**Unload**
- unload from bottom to top 
- travel to lowest possible node
  - free all pointers in children
  - back track upwards, freeing all elements in each children array until you hit root node
- recursion
