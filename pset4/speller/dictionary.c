// Implements a dictionary's functionality

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

// Hashes word to a number between 0 and 25, inclusive, based on its first letter
unsigned int hash(const char *word)
{
    return tolower(word[0]) - 'a';
}

// Tracks the numbers of words loaded in the hashtable
int wordCount = 0;

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
        node *new_node = NULL;
        int value = hash(word);

        //if this word in the hashtable is not assigned a node
        if (hashtable[value] == NULL)
        {
            new_node = malloc(sizeof(node));
            new_node->next = NULL;
            strcpy(new_node->word, word); //copy word into node
            hashtable[value] = new_node; // add to "new_node"
            //printf("%s", hashtable[value]->word); //cat
        }
         else // add new new node to the list of values stored in the array
        {
            node *nextnode = malloc(sizeof(node));
            nextnode->next = NULL;
            strcpy(nextnode->word, word);
            
            node *travnext = hashtable[value];
            while(travnext->next != NULL)
            {
                travnext = travnext->next;
            }
            travnext->next = nextnode;
            
            //new_node->next = nextnode;
            //hashtable[value]->next = nextnode;
            
            printf("%s", travnext->next->word); // caterpillar
            //printf("%s", travnext->next->next->word); // null
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
    return wordCount; // false;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO

    int key = hash(word);

    node *head = hashtable[key];

    node *temp = head;

    while (temp != NULL)
    {
        if (strcasecmp(word, temp->word) == 0)
        {
            return true;
        }
        else
        {
            temp = temp->next;
        }
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
   for (int i = 0, n = 26; i < n; i++)
    {
        node *temp = hashtable[i];

        while (temp != NULL)
        {
            temp = temp->next;
            free(temp);
        }
    }
    return true;
    //return false;
}
