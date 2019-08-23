# SEI CERT C Coding Standard samples

This repo contains unaltered copies of all sample code from the rules outlined in the [SEI CERT C Coding Standard](https://wiki.sei.cmu.edu/confluence/display/c/SEI+CERT+C+Coding+Standard). Sample code for the standard's various recommendations have not been included and there is no outstanding plan to do so. These source code files are not guaranteed to compile cleanly, or even at all. They are meant for use in gauging the effectiveness of static analyzers against CERT's rules for the C programming language.

## Nomenclature

Sample source files are found within the various subdirectories of the `rules` directory:

* `nc*.c` are non-compliant sources
* `c*.c` are compliant sources

Code samples follow an origin 0 naming scheme, _e.g._, the first non-compliant sample for a given rule is named `nc0.c`, the second `nc1.c`, and so forth. Code samples are numbered in the order they appear within the body of a rule.

Exceptions (see [DCL37-C](https://wiki.sei.cmu.edu/confluence/display/c/DCL37-C.+Do+not+declare+or+define+a+reserved+identifier), [EXP33-C](https://wiki.sei.cmu.edu/confluence/display/c/EXP33-C.+Do+not+read+uninitialized+memory), [EXP36-C](https://wiki.sei.cmu.edu/confluence/display/c/EXP36-C.+Do+not+cast+pointers+into+more+strictly+aligned+pointer+types), _et al._) are not currently included. While the nature of the compliant and non-compliant code samples is clear, it is not so for the exceptions. Sometimes code is supplied, but other times a description serves to suffice. Some exceptions are based on compliant code, while others are based on non-compliant code. Additional thought will have to go into how to best present the exceptional cases, where they occur. In the meantime, the corpus of compliant and non-compliant test cases is good enough.

## Legal statement

All of the C source code files in the `rules` directory have been copied directly from the SEI CERT C Coding Standard. No alterations of any kind have been made. Accordingly, all of these source files are _Copyright © Carnegie Mellon University. All Rights Reserved._
