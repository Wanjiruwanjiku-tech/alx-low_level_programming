0x1A. C - Hash tables
C
Algorithm
Data structure
 By: Julien Barbier
 Weight: 1


 Learning objectives

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

A hash table also known as a hash map is a type of datastructure that allows effective storage and retrieval of key-value pairs like dictionaries in python.

The hash() function generates digests that map the key to the specific index where a value can be stored or retrieved. The function takes a key as input.

Example: Key takes different names of persons and stores their age as values

		key = peter
		value = 23
		hash(peter)
		#will return the hash code/digest

In C programming language, you can create a hash function by creating an array to store key-value pairs and then designing an appropriate hash function to compute the indices.

This Project focuses on

	- Initialization
	- Hashing
	- Indexing
	- Collision handling
	- Storage and Retrieval
