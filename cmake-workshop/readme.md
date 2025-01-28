---
id: readme
aliases: []
tags: []
---

# CMake Workshop

Author: Alan Manuel Loreto Cornídez

Purpose: Workshop documentation for CMake. Presented at the IEEE technical
workshop meeting.

## What Is CMake?

tl;dr: CMake is a powerful software cross platform build system. It allows you
compile C++ code across multiple computers that may use different compilation
tools. You write one file that many developers can use and CMake.

## Let's talk about how making software.

When creating software there are many things that we have to consider. In this
case, let's assume we've chosen to work in C++.

What do we need to build software in C++?

- Source Code Files
- Libraries
- Compilers

Let's go ahead and start with a simple program in C++:

```c++
#include <iostream>

int main(int argc, char *argv[]) {

  // Print out hello world.
  std::cout << "Hello World" << std::endl;

  return 0;
}
```

> How would we run this code?

First we need to compile the code. This is done using my C++ compiler, g++.

Let's compile my program:

```bash
g++ -o myProgramGpp code/main.cpp
```

Then let's go ahead and run my program by calling `./myprogram`.

You'll see the following output:

```
Hello World!
```

What if I want to build this program using another compiler?

Let's use clang:

```bash
clang++ -o myprogramClang code/main.cpp
```

As you can see, we can use two different compilers to compile our code.

What if I create a file that allows me to run a single command that compiles my
code for me?

On linux/unix operating systems, we can use Makefiles!

Here is a simple Makefile that we can use to compile the same code using
different compilers.

```
all: gpp clang

gpp:
	@echo "Compiling using g++"
	@echo -n 'Command: '
	g++ -o myprogramgpp main.cpp


clang:
	@echo "Compiling using clang"
	@echo -n 'Command: '
	clang++ -o myprogramclang main.cpp



.PHONY clean:
	@rm -f myprogram*
```



Now what if I want to use a library such as OpenCV to open an image?

Now I need to add some arguments to my command to include the library inside of
my program:

We can use this command:

```bash
g++ main.cpp -o main -I/usr/include/opencv4 -lopencv_highgui -lopencv_imgcodecs -lopencv_core
```

We can also use the same command with clang:

```bash
clang++ main.cpp -o main -I/usr/include/opencv4 -lopencv_highgui -lopencv_imgcodecs -lopencv_core
```

## How would I build this on windows?

I don't know. I would need to learn how to work with their compilers and I don't
have time to do that because I'm on a deadline. So what do I do? 

