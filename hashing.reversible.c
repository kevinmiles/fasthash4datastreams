hash ^= constant;
hash *= constant; // if constant is odd
hash += constant;
hash -= constant;
hash ^= hash >> constant;
hash ^= hash << constant;
hash += hash << constant;
hash -= hash << constant;