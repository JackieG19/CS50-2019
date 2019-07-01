// Implements a dictionary's functionality
#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

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

// Tracks the numbers of words loaded in the hashtable
int wordCount = 0;

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

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        // TODO
        //malloc a node * for new word
        node *new_node = malloc(sizeof(node));
        new_node->next = NULL;

        // quit Speller
        if (new_node == NULL)
        {
            unload();
            return false;
        }

        //if this word in the hashtable is not assigned a node
        if (hashtable[value] == NULL)
        {   
            strcpy(new_node->word, word); //copy word into node
            int value = hash(word); // gets the value from the hash function
            hashtable[value] = new_node; // add to "new_node"
        }

        else // add new new node to the list of values stored in the array
        {
            node *nextnode = malloc(sizeof(node));
            nextNode->next = NULL;
            strcpy(nextNode->word, word);
            new_node->next = nextNode;
        }

        wordCount++;
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
    return wordCount; //0;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    node *head = malloc(sizeof(node));
    head = hashtable[hash(word)];
    node *cursor = head;

    while (cursor != NULL)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }

        cursor = cursor->next;
    }

    free(head);

    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    node *head = malloc(sizeof(node));

    for (int i = 0; i < N; i++)
    {
        head = hashtable[i];
        node *cursor = head;

        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }
    free(head);

    return true;
}
