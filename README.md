# Assignment 05

In this assignment, you'll develop three different versions of
a cache simulator:

* Direct Mapped Read-Only Cache

  This version only needs to support reading bytes from an address.
  The number of set index bits determines the number of cache lines as each
  set only has one line. No replacement policy is specified because there is
  no choice for which line to replace. 
* Fully Associative Write Through Cache

  This version supports both reading and writing bytes from an address.
  There is only one set of cache lines so the number of set index bits is known
  to be zero. The number of cache lines is specified when the cache is created.
  The replacement policy should be "least recently used". That means that if an
  empty cache line is not available, replace the cache line that was least recently
  used for either a read or write operation. HINT: use a global counter to keep track
  of how many read/write operations have occured and use that as a sort of "clock" for 
  keeping track of when a cache line was last used. This cache should implement 
  "write through" meaning that any write operations are immediately pushed to the main
  memory when they occur. Note, that only the word that contains the byte written should
  be updated in main memory. Not the entire cache line.
* Set Associative Write Back Cache

  This version implements a general set-associative cache with reading and writing
  with "write back". Within a set of cache lines, least recently used is the replacement
  policy. Write back means that when a byte is written, it is only written to the cache line
  without immediately updating main memory. A "dirty" cache line is written back in its entirety
  to the main memory when it is replaced. This version also supports "flushing" the cache which
  means writing back any dirty cache lines and invalidating all cache lines to reset the cache
  to empty.
