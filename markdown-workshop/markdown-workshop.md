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
    - [Github](https://www.github.com)
    - [Bitbucket](https://www.bitbuket.org)
    - [Gitlab](https://www.gitlab.com)

- Note Taking Platforms 
	- [Obsidian](https://www.obsidian.md)


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
This is arguably one of my favorite features of markdown in programming contexts.
You can quote code using the back-tick \` on your keyboard. This lets you quote `git add .` (\`git add .`) commands in a sentence. You can even do multi line code blocks:

```bash
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

## Lists
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

*Note:  Markdown support for equations depends on which markdown interpreter you use. Github and Obsidian both support $\LaTeX$ style equation writing.*

These are my favorite feature you can use with markdown. It lets me type my notes in class pretty easily, though it may annoy all of my classmates :P (sorry!)


$$ \mathbb{F}(s) = \int_{-\infty}^{\infty}{f(t) e^{-st} dt} $$

Where

$$ s \in \mathbb{C}$$


```
$$ \mathbb{F}(s) = \int_{-\infty}^{\infty}{f(t) e^{-st} dt} $$

Where

$$ s \in \mathbb{C}$$
```



# There's so many more features!
- Emojis: :octocat:
- Comments: <!-- You can't see this unless you look at the source code ;)-->
- Images and Gifs: 
<img src="https://cdn.myanimelist.net/s/common/uploaded_files/1449565442-799682393c093c4b5a5034dde32bb999.gif" width="200"/>

- And [links!](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
- You can even redirect people to other files in the repository, like today's [workshop activity](./activity.md)




