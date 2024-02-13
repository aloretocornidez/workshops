# Git Workshop

Presenter: Alan Manuel Loreto Cornídez

Tentative Presentation Date: February 19th, 5:00 PM

## What is Git?

Git is a distributed version control system designed to track changes in source
code during software development. It allows multiple developers to collaborate
on a project simultaneously without interfering with each other's work.

Git Features:

- Distributed: Developers each have a copy of the code on their own systems.
- Branching/Merging: Developers can implement features and bug fixes on without
  affecting the main codebase.
- Revision history: Did you delete all of your code by accident? No worries if
  you have a git repository you can recover any previous commit states.

## How Does Git Work?

### git repo information is stored within the `.git/` folder

A `git` repository is a folder with a `.git/` folder also contained within all
of the folders. The `git` app tracks all of the changes within that folder and
places all of the information inside of the `.git/` folder.

![The .git folder contains all of the information necessary for the git repository.](../assets/imgs/git-repo-contents.png)

### File States

Git tracks changes of files by keeping track of the states of files. Every time
you want to record a the current state of a repo.

When would you commit?

- Finished a bug fix
- Implemented a new feature

Let's talk about the states of a file.

![There are 4 different states for a file.](../assets/imgs/git-file-tracking.png)

## What is Github?

# TLDR

Use git when you need to keep track of changes in a codebase (or any set of
files, with caveats)

Git is the software that keeps track of changes.

Github/Gitlab/Bitbucket are sites that store git repositories.

Usually workflows go like this:

1. Clone (download) a repository from a host (github) (or `git pull` if you
   already have the code on your computer)
2. Make changes to the code inside the folder.
3. Add the changes and commit them to the repository history.
4. Push to code to the server.
5. If conflicts exists with your code and the server, then fix the conflicts
   (merge conflicts), then commit the fixes and push the code.


Have fun using git.
