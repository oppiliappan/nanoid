# nanoid.h
> A single header [NanoID](https://github.com/ai/nanoid) implementation in C

## What is NanoID?
NanoID is a tiny, secure URL-friendly unique string ID generator.  
It's **safe**. It uses cryptographically strong random APIs that guarantees proper distribution of symbols.  
And it's **compact**. It uses a larger alphabet than the standard UUID (`A-Za-z0-9_-`), and has a similar number of unique IDs in just 21 symbols instead of 36.

## Usage

```c
#include "nanoid.h"
```

This header file exposes 3 functions.  

`simple`  
```c
// generate an id of default length (21)
// using the default character list
char *id = simple(); // _n7XMO8sd8lCDnDLmyezf
```


`generate`  

```c
// generate an id of custom length
// using the default character list
char *id = generate(5); // DnDLm
```

`custom`  

```c
// generate an id of custom length
// using a custom character set
char custom_alphs[] = "abcde";
char *id = custom(custom_alphs, 7); // ecbebec
```
