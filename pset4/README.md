## Speller

1. call load on the dictionary file
- dictionary contains valid words, one per line
2. calls check on each word in the text file and prints all missspelled words
3. call size to determine number of words in dictionary
4. calls unload to free up memory

TODO:
- Load - load the dictionary 
- Check - checks if a given word is in the ditionary
- Size - returns the number of words in the dictionary 
- Unload - free the dictionary from memory

___

**dictionary.c**

- N pointer to node initialized above that array to 26 one bucket for each letter in the alphabet
- function hash that hashes a word
  - returning 0 for any word that starts with an [a] or [A]
  - return 1 for any words that starts with a [b] or [B]
- 25 for any word that starts with a [z] or [Z], etc.
- function load - to load a dictionary of words into the hash table
- inserting those words into hash table
- initialize all of the bucket (pointer) in hash table to NULL
- code that opens dictionary which is the filename to load
- code that iterates over that dictionary and reads the words there in, one at time, into buffer (string) called word
- close file that returns true to indicate success

In the terminal:
- ussage: speller [dictionary] text
- ./speller text
- ./speller dictionaries/ large text
- ./spelller dictionaries/ small text
- ./speller text/lalaland.text
- make speller 
- make speler.c
- make speller.o
- make dictionary.c
- make dictionary.o
