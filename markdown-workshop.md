# What is Markdown?

Markdown is a lightweight markup language for creating formatted text using a plain-text editor.[^markdown-definition]

[^markdown-definition]: https://en.wikipedia.org/wiki/Markdown


## Markdown Specification
There isn't one single kind of markdown standard.
Many platforms use their own of markdown specification.


## Why Use Markdown?
Markdown is a way to create readable text files that can be parsed by platforms to make multiple features easy to implement, e.g. headings, lists, links, code, math equations, images, etc.


## Platforms that Support Markdown
- Messaging Platforms
    - **Discord**
    - Microsoft Teams

- Code-Hosting Platforms
    - **Github**
    - Bitbucket
    - Gitlab

-Note Taking Platforms 
    - Obsidian


# Markdown Features
Let's discuss a few of the features that are possible with markdown.

## Text Styling
You can do simple styling quite easily:

*Italics*, **Bold**, ***Italic AND Bold***, __Underline__, ~~Strikethough~~,  <sub>sub</sub>script, <sup>super</sup>script

```md 
*Italics*, **Bold**, ***Italic AND Bold***, __Underline__, ~~Strikethough~~,  <sub>sub</sub>script, <sup>super</sup>script
```


## Headings and Sub-Headings
I've been using headings for this entire workshop, it lets you divide topics and subtopics.

### Animals
There are many animals species.
#### Dogs 
Dogs are pretty cool. I like dogs.
#### Cats
I also like cats quite a bit!
##### Orange Cats
Orange cats have interesting features and should be considered a species of their own.


```md 
### Animals
There are many animals species.
#### Dogs 
Dogs are pretty cool. I like dogs.
#### Cats
I also like cats quite a bit!
##### Orange Cats
Orange cats have interesting features and should be considered a species of their own.
```


## Quoting Text
> What you guys are referring to as Linux, is in fact, GNU/Linux, or as I've recently taken to calling it, GNU plus Linux.
Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX... 
> 
> \- pearjuice, August 13, 2013

```md 
> What you guys are referring to as Linux, is in fact, GNU/Linux, or as I've recently taken to calling it, GNU plus Linux.
> Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX... 
> 
> \- pearjuice, August 13, 2013
```

## Quoting Code 
This is argueably one of my favorite features of markdown in programmin contexts.
You can quote code using the backtick \` on your keyboard. This lets you quote `git add .` (\`git add .`) commands in a sentence. You can even do multi line code blocks:

```
git add .
git commit -m 'moar code'
git push -u origin main
```
````

Do it like this:
``` 
git add .
git commit -m 'moar code'
git push -u origin main
```
````
What's the best part?
**You can even specify the language that you're using to get syntax highlighting!!!**
```c 
while(true)
{
    printf("i use arch btw");
}
```
Do it like this:
````
```c 
while(true)
{
    printf("i use arch btw");
}
```
````

## Lists.
You can do ordered and unordered lists, with checkmarks as well!

1. Item 1
    - Sub-Item 1
        - [x] Task 1
        - [ ] Task 2 
        - [ ] Task 3
    - Sub-Item 2 
2. Item 2 
    - Sub-Item 1 
    - Sub-Item 2 
3. Item 3
    - Sub-Item 1 
    - Sub-Item 2 

```md 
1. Item 1
    - Sub-Item 1 
        - [x] Task 1
        - [ ] Task 2 
        - [ ] Task 3
    - Sub-Item 2 
2. Item 2 
    - Sub-Item 1 
    - Sub-Item 2 
3. Item 3
    - Sub-Item 1 
    - Sub-Item 2 
```
### 




## Math Equations!
These are my favorite feature you can use with markdown. It lets me type my notes in class pretty easily, though it may annoy all of my classmates :P (sorry!)


$$ \mathbb{F}(s) = \int_{-\infty}^{\infty}{e^-{st} dt} $$

Where

$$ s \in \mathbb{C}$$


## Activity
Let's have some fun! 



