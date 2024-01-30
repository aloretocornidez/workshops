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

While the meme clearly exists for a reason, let me ask you, "Would you trust a
mechanic who doesn't know when they should use their ratchet, impact gun, or
hammer?"

In short, linux is the word that people use to refer a a lot of things that are
technically more than just linux. In order to better communicate what we're
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
want to 'level up' your 'linux' prowess, it would be wise to lean how to utilize
these tools. A list of many useful commands in addition to a brief description
can be found at
[wikipedia.org/wiki/List_of_GNU_Core_Utilities_commands](https://en.wikipedia.org/wiki/List_of_GNU_Core_Utilities_commands).

## Why should I use linux?

Linux isn't for everyone, it's not the perfect platform for every application,
however, Linux excels at what it is good at.

Here's a few reasons for why I use linux:

- Software Development

  - Python
  - C/C++
  - Git
  - Web Development
  - Embedded Systems

- Linux offers endless customizability
- Privacy is much easier to maintain on linux.
- Free-Open Source software

Who is linux not for?

Linux does not work well for people who are bound to certain pieces of software.
There are lots of software tools that are only available on linux (with full
compatibility).

- Adobe Design Suite
- Gaming (Though, this situation is much better than before).

## How Can I get Started?

There are multiple options for getting started with linux:

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
they imagine what linux is.

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

## Time to begin using linux

> How do I install applications?

Application in linux are installed using something called a 'Package Manager',
the specific package manager that you use will change depending on the
distribution you are using. If you are on Ubuntu, your package manager is `apt`,
if you are on other distributions, it may be `yum` or `dnf`.

In addition to the package manager, there are other stores that are available,
such as the `snap` store or `Flathub`, imagine that these are kind of like
installing applications through `Steam` or another game launcher.

### Installing Software

Installing software on linux is as simple as running a command such as:

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
have permissions to do so. That is because installing software on linux requires
the use of root permissions (or as windows users call it, administrator
privileges).

There is a program in linux called `sudo` (which stands for "super user do"),
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

Using `./` as part of your argument specifies that something is in the current directory.

```bash
cd
```

#### `pwd` 

`pwd` prints out the directory that you're currently inside of in your current terminal (emulator).



```bash
pwd # print working directory
```


### Command Flags


