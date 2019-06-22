**Load**
- For each word in the dictionary text file, store it in the dictionary data structure
  - hash table
  - linked list
  - tries
  
**hash table**
- an array of buckets 
- hash function: returns the bucket that a given key belongs to
- hash table 2 buckets 
- hash function:
```
if(n%2 == 1),
  odd box
else,
  even box
```
- a hash table is an array of bucket
- each bucket is a linked list

**Nodes**
- Each node has a value as well as a pointer to the next node
___
**Linked lists**
- last node points to NULL
```
typedef struct node
{
  char word [LENGTH + 1];
  struct node *next;
}node;

node *node1 = malloc(sizeof(node));
node *node2 = malloc(sizeof(node));

strcpy(node1->word, "Hello")
strcpy(node2->word, "Word")
```
___
**Hash Table**
```
typedef struct node
{
  char word [LENGTH + 1];
  struct node *next;
}
node;

node *hashtable[50];
```
**Make a new word**
- scan dictionary word by word
```
while()
{
  ...
}
```
- malloc a node *for each new word
```
node *new_node = malloc(sizeof(node));
if(new_node == NULL)
{
  unload();
  return false;
}
```
- copy word into node
```
strcpy(new_node->word, word);
```

**Hash function**
- take a string
- returns an index
  - index < number of buckets
- the same value needs to map to the same bucket every time

**Hash the word**
- new_node->word was the word from the dictionary
- hashing new_node->word will give us the index of a bucket in the hash table
- insert into the linked list
