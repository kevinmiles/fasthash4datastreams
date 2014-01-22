This project contains C/C++ source code for fast 
hashing applied to data streaming.

## Objectives 

 1. Calculate hashkeys as fast as possible. For 
example, CRC24 is fast. 
 2. Create valid C/C++ structures for data 
streaming where it is not only about hashing  but 
also about efficient structure in storage. 
 3. Multicore architectures where C/C++ structures 
are not only efficient but can be efficiently 
shared across multiple CPU cores. 

## Specifics

All the source code can be compiled using simple 

`gcc` or `g++` command line utilities.  Meaning 
that Linux should work out of the box.  I also use 
this code in Windows/Cygwin.

`hashing.*.c` are primitive bitwise hashing 
operations, divided into reversible versus 
irreversible ones.

`crc24.c` is publically available implementation of 
CRC24 algorithm.  Theory says that randomization in 
the first 16 bits of hash keys is better than in 
the rest of the key. 

`dll.c` is a simple example of a Double-Linked List 
(DLL) impelmented in C/C++. Payload can be 
anything. 

`m2meter.c` is a complex structure for capturing 
Many-To-Many (M2M) communication patterns in packet 
traffic. 
