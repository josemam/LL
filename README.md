# LL
A simple Lucas-Lehmer primality test implementation for C++

My GitHub profile was empty, so I decided to add this. Why not?

This performs a [Lucas-Lehmer primality test] (http://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test) for a given exponent from 0 to 32. Unfortunately `unsigned long long` is not a good type for this kind of tests, so any exponent that is higher than 32 will trigger an arithmetic overflow.

Of course, there are better LL implementations all over the Internet (e.g.: check out [prime95] (http://www.mersenne.org/download)), so you will probably not want to start anything from this. I just wanted to upload something.

Anyway, if you still feel like updating this, you are welcome. Maybe some support for bigger numbers would increase the range of valid inputs.
