# Linux Workshop

Author: Alan Manuel Loreto Cornídez

Purpose: Linux is a powerful tool that can be used to change and optimize your
workflow to better fit your needs, what can you do to get started?

## What Is Linux?

> I’d just like to interject for a moment. What you’re referring to as Linux, is
> in fact, GNU/LInux, or as I’ve recently taken to calling it, GNU plus Linux.
> Linux is not an operating system unto itself, but rather another free
> component of a fully functioning GNU system made useful by the GNU corelibs,
> shell utilities and vital system components comprising a full OS as defined by
> POSIX.
>
> Many computer users run a modified version of the GNU system every day,
> without realizing it. Through a peculiar turn of events, the version of GNU
> which is widely used today is often called “Linux”, and many of its users are
> not aware that it is basically the GNU system, developed by the GNU Project.
>
> There really is a Linux, and these people are using it, but it is just a part
> of the system they use. Linux is the kernel: the program in the system that
> allocates the machine’s resources to the other programs that you run. The
> kernel is an essential part of an operating system, but useless by itself; it
> can only function in the context of a complete operating system. Linux is
> normally used in combination with the GNU operating system: the whole system
> is basically GNU with Linux added, or GNU/Linux. All the so-called “Linux”
> distributions are really distributions of GNU/Linux.
>
> \- Random Internet Stranger (circa early 2000s??!1)

While the copy-pasta clearly exists for a reason, let me ask you, "Would you
trust a mechanic who doesn't know when they should use their ratchet, impact
gun, or hammer?"

In short, Linux is the word that people use to refer a a lot of things that are
technically more than just Linux. In order to better communicate what we're
actually doing, I'm going to define some terms. Having an understanding of the
intricacies of these differences will allow us to better communicate with each
other as well as better understand our tools.

**Linux**: The Linux kernel (or the windows kernel) is the interface between the
computer hardware and the processes running on the computer. The kernel is the
part of the operating system that properly allocates hardware resources to run
software.

**Shell**: The shell is the human interface with the operating system's. By
using a shell we are able to write human readable commands that let us tell the
operating system to run software.

**Command Line**: The command line is an interface used to execute shell
commands. Commands can be executed using a graphical user interface (GUI) or
through the command line (using a terminal emulator).

**GNU Core Utils**: The GNU(pronounced guh-new) core utils is a collection of
software tools that allow us to useful commands through the command line. If you
want to 'level up' your 'Linux' prowess, it would be wise to lean how to utilize
these tools. A list of many useful commands in addition to a brief description
can be found at
[wikipedia.org/wiki/List_of_GNU_Core_Utilities_commands](https://en.wikipedia.org/wiki/List_of_GNU_Core_Utilities_commands).

## Why should I use Linux?

Linux isn't for everyone, it's not the perfect platform for every application,
however, Linux excels at what it is good at.

Here's a few reasons for why I use Linux:

- Software Development

  - Python
  - C/C++
  - Git
  - Web Development
  - Embedded Systems

- Linux offers endless customizability
- Privacy is much easier to maintain on Linux.
- Free-Open Source software
- Cool software that I use

Who is Linux not for?

Linux does not work well for people who are bound certain software.

- Adobe Design Suite
- Gaming (Though, this situation is much better than before).

## How Can I get Started?

There are multiple options for getting started with Linux:

**Process Virtual Machines** (An operating system within your operating system)

- Oracle Virtual Box
- VM Ware

**System Virtual Machines** run through a "hypervisor" which lets both operating
systems access the hardware at near native speeds.

- Windows Sub-System for Linux (WSL)

**Dual booting** lets you run two different OSes on the same computer by
partitioning your hard drive with multiple operating systems (or using multiple
hard drives)

> How should I use Linux then?

Great question, my personal recommendation for most people who are on windows is
to either

- Begin with an ubuntu Virtual Machine to prepare themselves for dual booting.
- Use windows WSL so that they can get the best (and worst) of both operating
  systems.

If you are on MacOS, you basically already have what most people think of when
they imagine what Linux is.

Let's take this time to install WSL or our virtual machine.

Follow [these steps](https://learn.microsoft.com/en-us/windows/wsl/install) to
install WSL. Another option is to go to the
[microsoft store](https://apps.microsoft.com/detail/9P9TQF7MRM4R?hl=en-us&gl=US)
and install WSL from there.

While you're there, you can install
[Ubuntu](https://apps.microsoft.com/detail/9PDXGNCFSCZV?hl=en-us&gl=US) as well.

This install can be done entirely through the command line if you would prefer:

```ps
wsl --install

wsl --install -d Ubuntu
```

I also recommend this terminal emulator:
[Windows Terminal](https://apps.microsoft.com/detail/9N0DX20HK701?hl=en-US&gl=US)

## Time to begin using Linux

> How do I install applications?

Application in Linux are installed using something called a 'Package Manager',
the specific package manager that you use will change depending on the
distribution you are using. If you are on Ubuntu, your package manager is `apt`,
if you are on other distributions, it may be `yum` or `dnf`.

In addition to the package manager, there are other stores that are available,
such as the `snap` store or `Flathub`, imagine that these are kind of like
installing applications through `Steam` or another game launcher.

### Installing Software

Let's use some software(though, we technically already have, just without using
a gui, remember, all software is just running commands like this. Instead of you
typing it into the terminal, the GUI changes the command that is run and then
runs it when you click 'ok')

Installing software on Linux is as simple as running a command such as:

```bash
apt install git-all # installs the git version control system
```

or

```bash
snap install spotify # installs the spotify music app.
```

or

```bash
flatpak install LibreWolf # installs the LibreWolf browser.
```

You'll notice that the commands look fairly similar, you'll quickly learn that
is usually the case with a lot of apps that you try to use the command line.
They have a very similar command structure.

`application action argument`

For example, if you wanted to search for applications instead of installing
them, you could replace `install` with `search` for all three of them.

```bash
snap search spotify # searches the for the spotify app and returns the information for it.
```

### `sudo` Commands

As some of you may have noticed when trying to install something, you may not
have permissions to do so. That is because installing software on Linux requires
the use of root permissions (or as windows users call it, administrator
privileges).

There is a program in Linux called `sudo` (which stands for "super user do"),
which allows you to run a single command as an administrator. This requires you
to enter your account password. You can only run these commands if your account
has 'sudo' permissions. This is done in the name of security.

### Navigating your computer

Okay, so you've installed some software, but we likely want to do more than just
install our software, we probably want to be able to use it as well.

It is important to remember that all of our software that contains a graphical
user interface (GUI) is just software that manipulates a text file or works with
a text file in some way.

We store all of our files in a directory on our computer, so let's learn how to
navigate our directories.

Here are three extremely useful commands (part of the GNU utils)

#### `ls`

`ls` lists the sub-contents of a directory, the default is the current
directory, but you can use any directory on your system as an argument.

```bash
ls # lists the contents of the specified directory, the default is the current directory
```

#### `cd`

`cd` changes your current working directory to the specified directory that you
entered as an argument.

Using `cd` alone on the command line will return you to your home directory.

Using `../` as part of your argument lets you go back a directory.

Using `./` as part of your argument specifies that something is in the current
directory.

```bash
cd
```

#### `pwd`

`pwd` prints out the directory that you're currently inside of in your current
terminal (emulator).

```bash
pwd # print working directory
```

### Changing command behavior | Flags

Sometimes, the command structure may not always be exactly how we want it.

In cases like this, it is important to know how to use command flags. Command
flags let us change the behavior of the programs that we're running.

For example, let's look at the `ls` command.

`ls` returns this output in my home directory:

```
175-computer-programming                       579-principles-of-artificial-intelligence  school-notes
531-software-defined-radio                     iso-files                                  textbooks
571-fundamentals-information-network-security  lab-571                                    todo.md
574-computer-aided-logic-design                non-school                                 workshops
574-project                                    personal-git
```

But I want it to show me the contents in a different way, so I'll use some flags
to change that `A` shows all hidden files, `gG` shows the owners of the files
and `h` shows the size of the file in a human readable format:

instead of running `ls`, I'll run `ls -AgGh`

```
drwxr-xr-x  6 4.0K Jan 11 13:29 175-computer-programming
drwxr-xr-x  4 4.0K Jan 28 19:55 531-software-defined-radio
drwxr-xr-x  6 4.0K Jan 28 19:16 571-fundamentals-information-network-security
drwxr-xr-x  5 4.0K Jan 11 12:22 574-computer-aided-logic-design
drwxr-xr-x  6 4.0K Jan 24 09:07 574-project
drwxr-xr-x  4 4.0K Jan 18 08:03 579-principles-of-artificial-intelligence
drwxr-xr-x  3 4.0K Jan 19 11:46 iso-files
drwxr-xr-x  5 4.0K Jan 19 14:27 lab-571
drwxr-xr-x  2 4.0K Jan 17 10:26 non-school
drwxr-xr-x 12 4.0K Jan 28 19:17 personal-git
drwxr-xr-x  4 4.0K Jan 17 08:57 school-notes
drwxr-xr-x  2 4.0K Jan 24 11:26 textbooks
-rw-r--r--  1  530 Jan 30 08:29 todo.md
drwxr-xr-x  6 4.0K Jan 29 11:15 workshops
```

This gives me a bit more information that I like in addition to listing my
contents in a line by line basis. But I also want to sort directories first and
make the directories appear in color. To do this I can add the flags
`--color=auto` so that it matches my terminal theme and
`--group-directories-first` so that the directories are listed first and then
the files.

Running `ls -AgGh --color=auto --group-directories-first` gives this output.

```
drwxr-xr-x  6 4.0K Jan 11 13:29 175-computer-programming
drwxr-xr-x  4 4.0K Jan 28 19:55 531-software-defined-radio
drwxr-xr-x  6 4.0K Jan 28 19:16 571-fundamentals-information-network-security
drwxr-xr-x  5 4.0K Jan 11 12:22 574-computer-aided-logic-design
drwxr-xr-x  6 4.0K Jan 24 09:07 574-project
drwxr-xr-x  4 4.0K Jan 18 08:03 579-principles-of-artificial-intelligence
drwxr-xr-x  3 4.0K Jan 19 11:46 iso-files
drwxr-xr-x  5 4.0K Jan 19 14:27 lab-571
drwxr-xr-x  2 4.0K Jan 17 10:26 non-school
drwxr-xr-x 12 4.0K Jan 28 19:17 personal-git
drwxr-xr-x  4 4.0K Jan 17 08:57 school-notes
drwxr-xr-x  2 4.0K Jan 24 11:26 textbooks
drwxr-xr-x  6 4.0K Jan 29 11:15 workshops
-rw-r--r--  1  530 Jan 30 08:29 todo.md
```

Now I have my command that I want and have gotten the behavior that I wanted.
This may seem cumbersome or annoying to do, and I agree. If you want your
commands to exhibit this behavior every time without having to type all of the
flags you can do this with an 'alias'. This lets you run multiple commands by
typing something else.

The easiest way to do this is by adding the alias to the configuration file for
your bash shell. (We can return to this if you would like).

However, I mentioned that software development is easy on Linux, so let's make a
quick hello world program.

Let's make a `main.c` file and put this code in there:

You can use the `nano` program to do this. Use the following command:

```bash
nano main.c
```

This will open the `nano` text editor and let you modify the `main.c` file.

```c
#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Hello World!!!\n");
    return 0;
}
```

Now we need to compile it, so let's invoke our compiler and make it compile our
code.

We can do that using this command:

```bash
gcc -o main main.c
```

_Note_: `gcc` is the 'compiler' we are invoking, `-o main` tells the program to
compile to the name `main`, and the `main.c` is the source file that we're
giving it.

If everything went well, there should be no output, otherwise, fix your error
and compiler again.

After that, we can run our code using the following command:

```bash
./main
```

We should see the `Hello World!!!` pop up in our terminal at this point.

## What's next?

Well, now you have a basic understanding of some of the things that are possible
with Linux, however, there's a lot of questions that you may not know the answer
to.

When using Linux, there is a large culture shift in how people will help you,
especially if you use certain distributions of Linux, ever heard of `RTFM`. So
let me give you some quick tips on figuring out how something works.

### Help Flags

The first option to learn how a command works is to use the `-h` or `--help`
flag. This will show the help information of the program. Sometimes it can be
something like `git help <command>`. Help is usually retrieved using a variation
of those three commands:

```bash
<command> -h
<command> --help
<command> help
```

## Manual pages

In reference to the `RTFM` comments you may receive, here's the manual pages.

`man` is a command that shows you the manual of a program. Usually they are more
in-depth than the help pages of the command as well. However, you need to trust
that the developer has written the man pages for the software itself. This
usually isn't a problem, especially with more popular software.

## Wiki pages

Use google. The [Arch Wiki](https://wiki.archLinux.org/) has some of the best
documentation that applies to more than just that particular distribution.

The last resort should be to make a forum post on a forum of your choice
(usually a forum dedicated your your particular distribution).

Now that you have a simple roadmap, I hope you can utilize Linux, or at the very
least, understand why it is held in such high regard.

If you want to see ome really cool tricks, you should attend the Bash Workshop
that will be held in a few weeks. This workshop teaches you a lot of cool tricks
that are more than just 'here is how commands work'.

As you gain more experience, you'll be able to utilize the the command line a
lot more and make it more efficient than using your gui application. One
example: it is literally faster to pull all of my repositories using my terminal
than it is using the gui application. Because I set up an alias.






