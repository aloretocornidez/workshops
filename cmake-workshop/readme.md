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

## Make Compiling Quick

How can I make compiling easy on my computer? I don't want to have to type the
command every single time I need to compile.

I can use a program called `Make`, this allow me to compile my code using the
`make` command. I write 1 Makefile that contains the commands needed to compile
my code and make will run those commands for me.

Makefiles are extremely powerful!! All Makefiles are is a file that you write
your needed outputs and the commands to generate those outputs and `make` will
build your needed outputs for you. (You should really learn about make)

## How would I build this on windows?

Well, it turns out that Make is not a program that works on windows. It's a
linux/unix tool. We would need to run other commands that allow us to compile
our code.

So what can I do?

# This is CMake

Now we start to figure out a bit about why we use CMake.

CMake is a program that generates automated scripts to compile our files for us.

I can use CMake to generate my Makefiles for me.


