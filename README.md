# LL
A simple Lucas-Lehmer primality test implementation for C++


My GitHub profile was empty, so I decided to add this. Why not?

This performs a [Lucas-Lehmer primality test] (http://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test) for a given exponent from 0 to 65535. Now it works using Henrik Vestermark's [arbitrary precision package] (http://www.hvks.com/Numerical/arbitrary_precision.html), so it now works for large exponents.

How to compile: save ll.cpp and Henrik Vestermark's package iprecision.h and precisioncore.cpp (you may find them [here] (http://www.hvks.com/Numerical/Downloads/Precision.zip)) at the same directory, then run `g++ -o [any name for your executable file] ll.cpp precisioncore.cpp`.

Of course, there are better LL implementations all over the Internet (e.g.: check out [prime95] (http://www.mersenne.org/download) for an excellent working SW or the large [software list] (http://www.mersenne.org/download/freeware.php) they suggest for many source code examples), so you will probably not want to start anything from this. I just wanted to upload something.

Anyway, if you still feel like updating this, you are welcome. ~~Maybe some support for bigger numbers would increase the range of valid inputs~~ Done!
