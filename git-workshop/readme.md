---
id: readme
aliases: []
tags: []
---

# Git Workshop

Presenter: Alan Manuel Loreto Cornídez

<!-- Tentative Presentation Date: February 19th, 2024, 5:00 PM -->
<!-- Tentative Presentation Date 2: September 16th, 2024, 6:00 PM -->

## What is Git?

Git is a distributed 'version control system' (VCS) designed to track changes in
source code during software development. It allows multiple developers to
collaborate on a project simultaneously without interfering with other people's
work.

Git Features:

- Distributed: Developers each have a copy of the code on their own systems.
- Branching/Merging: Developers can implement features and bug fixes on without
  affecting the main codebase.
- Revision history: Did you delete all of your code by accident? No worries if
  you have a git repository you can recover any previous commit states.

## Git vs. GitHub?

Often times, people will ignore or confuse the differences between git and
GitHub.

As we have already established, git is the software that performs version
control on your repository.

Github is a site the hosts git repositories. GitHub is not the only site that
hosts git repositories. Here are some other sites that also host git
repositories:

- Bitbucket
- Gitlab
- Random Servers (yes, you can host your own server)

## Why would I want to use `git`?

`git` is an extremely powerful tool that allows you to work with your source
code much more effectively.

You can:

1. Keep track of your changes you make.
2. Recover working code if you make a mistake.
3. Work with other people simultaneously (through the use of branching)
4. Keep your code stored on a server (in one case, github) and use it as a
   reference.
5. Flex on the people that don't know how to use `git`.

## How can I use `git`?

There are multiple ways to use git.

- Using the [GitHub Desktop](https://desktop.github.com/) app
- Using the [git shell](https://git-scm.com/)
- Using editor add-ons (VsCode, Visual Studio, XCode)
- Working directly on the website.

### What do I recommend?

I recommend you begin by using the GitHub desktop app while slowly transitioning
to using the command line (CLI) to the point of being comfortable with the CLI.
After you get comfortable with the CLI you can continue using the desktop app
and then use the command line when you need to do something more complex.

## How Does Git Work?

tl;dr: Your code is stored in a folder, inside that folder there is another
folder (`.git/`) that contains all of the information pertaining to that code
repository (your current revision, your history of changes, other branches,
messages, configuration files, etc.). Any time you make changes, you 'commit' to
history and then upload those changes onto the server (Github) and then other
people can download it.

### git repo information is stored within the `.git/` folder

A `git` repository is a folder with a `.git/` folder also contained within all
of the folders. The `git` app tracks all of the changes within that folder and
places all of the information inside of the `.git/` folder.

![git folder](../assets/imgs/git-repo-contents.png)

The .git folder contains all of the information necessary for the git
repository.

![contents of a .git/ folder.](../assets/imgs/git-folder-contents.png)

### File States

Git tracks changes of files by keeping track of the states of files. After you
make changes that are okay, you can `commit` these changes and store them in the
repo's history.

When would you commit?

- Finished a bug fix
- Implemented a new feature

Let's talk about the states of a file.

![There are 4 different states for a file.](../assets/imgs/git-file-tracking.png)

1. **Untracked** files: These are files that are in the same folder as your repo but
   are **not** being tracked by git. Usually, they are newly created files.
2. **Tracked** (but unmodified) files: These files **are** being tracked by git.
   unmodified means that the file is not different since you last committed it.
3. **Modified** files: These files have been modified since your last commit but
   have not been staged for your next commit.
4. **Staged** files: These files have been modified and are staged for commit. This
   means that the next time you commit, you will store this file's state.

This sounds a lot more complicated than it really is, it's easier to show you
than tell you, so lets go ahead and do a quick demo.

## Let's Demo This Now

I'll be running a simple demo showing how a simple workflow would go using both
the GitHub Desktop app and the Bash Shell.

## Git Features

## `.gitignore files`

Sometimes, you don't want to track files or folders but would like the
conveniences of using more general commands (such as `git add .` instead of
having to add each individual file).

This is a circumstance where `.gitignore` files will come in very useful.

`.gitignore` files can be placed in any folder within the git repository and can
be used to ignore files that you don't want to track.

- compiled binaries
- large files

Here is what is in my `.gitignore` file for this repository:

```gitignore
.obsidian # ignores my obsidian folder in the root directory.
**.pdf # ignores all my pdfs in all of my folders.
**/.~lock* # ignores all of my lock files generated by libre-office
./**/*.[op] # ignores all files that end in .o and .p
```

## Branching/Merging

Branches are a way for developers to work together on a large project.

You can see the branch-graph history in the following image:

![branch-graph](../assets/imgs/git-branch-map.png)

The purple nodes are the main branch. This is what will be released.

The green nodes are a branch that implemented a feature.

The blue nodes are a branch of the green nodes.

The orange nodes branched off of the blue nodes and then merged back in to the
blue nodes at the end.

The red nodes nodes branched off of the blue nodes and were merged back into the
purple nodes.

As you can see, there were 5 different actors in this code base. Branching lets
you fix bugs and implement features as well.

## Reverting changes

If you accidentally remove all of your code in a commit you're able to undo
commits (how do you think I know?).

In order to revert the changes in a specific commit, you need to be able to identify the commit. Every commit in a repository is assigned a commit ID as a hash string; they can be referenced by using the `git log` command within your repository.

Below is a screenshot of the logs.

![git-log-output.png](../assets/imgs/git-log-output.png)

You can undo (revert) the changes done in a certain commit by typing the appending the commit ID (hash) to the `git revert` command. 

```bash
# we can usually shorten the commit id to the first few characters in the string
# to undo commit 30312bd1190be2dae0f49fccc7d207288b6c4da5 we can run the following command:
git revert 30312bd
```

Reverting a commit creates another commit that states that changes were reverted (remember, Git emphasizaes the importance of a repository's history.

**Note:** There are ways to modify the history of a repository by using `git squash` or by using the `git rebase` features; however, this is beyond the scope of this workshop.

# TLDR

Use git when you need to keep track of changes in a codebase (or any set of
files, with caveats)

Git is the software that keeps track of changes.

Github/Gitlab/Bitbucket are sites that store git repositories.

Usually workflows go like this:

1. Clone (download) a repository from a host (github) (or `git pull` if you
   already have the code on your computer)
2. Make changes to the code inside the folder.
3. Stage the changes using `git add` and then commit them with a message using
   `git commit -m` to the repository history.
4. Push to code to the server.
5. If conflicts exists with your code and the server, then fix the conflicts
   (merge conflicts), then commit(again) the fixes and push the code.

```bash
# downloads a new repository from github if you do not have it on your local machine
git clone git@github.com:aloretocornidez/workshops.git

# downloads repository updates (also known as a fetch) from the origin (in this case, github)
# and applies any downloaded commits on your local machine
git pull

# you work on your code at this point

# stages the files that you want to commit (the . indicates all files in our current working directory)
git add .

# this command shows you the status of the repository
git status

# commit the changes in the staged files
# the -m flag is used to enter the commit message on the command line instead of using a text editor
git commit -m 'i made changes'

# upload commits on your local computer to your github repository
git push
```

I highly suggest reading the [giteveryday documentation](git-scm.com/docs/giteveryday) for a brief introduction to many of the commands that you will see regulary when working with git.
