# LL
Simple Lucas-Lehmer primality test implementations for C++ and Haskell


My GitHub profile was empty, so I decided to add this. Why not?

These snippets perform a [Lucas-Lehmer primality test] (http://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test) for a given exponent. The C++ version works using Henrik Vestermark's [arbitrary precision package] (http://www.hvks.com/Numerical/arbitrary_precision.html). The Haskell implementation is _way_ faster. And more elegant.

How to compile:
 - C++: save `ll.cpp` and Henrik Vestermark's package `iprecision.h` and `precisioncore.cpp` (you may find them [here] (http://www.hvks.com/Numerical/Downloads/Precision.zip)) at the same directory, then run `g++ -o [any name for your executable file] ll.cpp precisioncore.cpp`.
 - Haskell: run `ghc -o [any name for your executable file] ll.hs -O2 -optc-O2`.

Of course, there are better LL implementations all over the Internet (e.g.: check out [prime95] (http://www.mersenne.org/download) for an excellent working SW or the large [software list] (http://www.mersenne.org/download/freeware.php) they suggest for many source code examples), so you will probably not want to start anything from this. I just wanted to upload something.

Anyway, if you still feel like updating this, you are welcome. Maybe a FFT-based multiplication in order to square number faster?
