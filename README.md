# howto-use-llvm-asm
[sketch, educational] How to import a function written in LLVM Assembly (IR) into a C application

Using LLVM's IR seems a good choice: you can write efficient assembly code, but it's platform-independent. This repo is only a note to myself on how to mix LLVM assembly and C.

See: https://idea.popcount.org/2013-07-24-ir-is-better-than-assembly/

Note: yoo will need to change `llc` version in `build.sh`
