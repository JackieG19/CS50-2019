// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents number of buckets in a hash table
#define N 26

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Represents a hash table
node *hashtable[N];

// Count of words added to the dictionary
int dictCount = 0;

// Hashes word to a number between 0 and 25, inclusive, based on its first letter
unsigned int hash(const char *word)
{
    return tolower(word[0]) - 'a';
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        hashtable[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    // create a head of the linked list
    node *head = malloc(sizeof(node));

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        // TODO
        node *newNode = malloc(sizeof(node));

        if (newNode == NULL) // set the head next value to NULL
        {
            unload();
            return false;
        }
        else
        {
            strcpy(newNode->word, word);
            int position = hash(newNode->word);
            head = hashtable[position];
            newNode->next = head;
            head = newNode;
            dictCount++;
        }

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    // node * = malloc(sizeof(node));
    // hashtable[hash(word)];

    // if ( == NULL)
    //     printf();

    // while ( != NULL)
    //     printf();

    //     if ()
    //         printf("word\n");
    //         return true;
    // free();

    return false;

}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    // node * = malloc(sizeof(node));
    // for ()
    //     head = hashtable[i];
    //     while ( != NULL)
    //         node *temp
    //         free(temp);

    //     free();
    //     return true;
    return false;
}