---
id: LaTeX
aliases: []
tags: []
---

# $\LaTeX$

## What is $\LaTeX$?

_Note_: The following sections of this page are direct copies from the
[LaTeX website](https://www.latex-project.org/about/).

LaTeX, which is pronounced «Lah-tech» or «Lay-tech» (to rhyme with «blech» or
«Bertolt Brecht»), is a document preparation system for high-quality
typesetting. It is most often used for medium-to-large technical or scientific
documents but it can be used for almost any form of publishing.

LaTeX is not a word processor! Instead, LaTeX encourages authors not to worry
too much about the appearance of their documents but to concentrate on getting
the right content. For example, consider this document:

```txt
Cartesian closed categories and the price of eggs
Jane Doe
September 1994

Hello world!
```

To produce this in most typesetting or word-processing systems, the author would
have to decide what layout to use, so would select (say) 18pt Times Roman for
the title, 12pt Times Italic for the name, and so on. This has two results:
authors wasting their time with designs; and a lot of badly designed documents!

LaTeX is based on the idea that it is better to leave document design to
document designers, and to let authors get on with writing documents. So, in
LaTeX you would input this document as:

```tex
\documentclass{article}
\title{Cartesian closed categories and the price of eggs}
\author{Jane Doe}
\date{September 1994}
\begin{document}
   \maketitle
   Hello world!
\end{document}
```

Or, in English:

- This document is an article.
- Its title is Cartesian closed categories and the price of eggs.
- Its author is Jane Doe.
- It was written in September 1994.
- The document consists of a title followed by the text Hello world!

## LaTeX Features

- Typesetting journal articles, technical reports, books, and slide
  presentations.
- Control over large documents containing sectioning, cross-references, tables
  and figures.
- Typesetting of complex mathematical formulas.
- Advanced typesetting of mathematics with AMS-LaTeX.
- Automatic generation of bibliographies and indexes.
- Multi-lingual typesetting.
- Using PostScript or Metafont fonts.

## How does $\LaTeX$ work?

For the purposes of note-taking, the concept is very simple. When using an
editor like obsidian, you can include in-line equations by surrounding your
equation in dollar signs as shown:

```tex
$F( j \omega ) = \int \limits_{-\infty}^{\infty} f(t) e^{-j \omega t} dt$
```

This renders the equation like this: $F( j \omega ) = \int\limits_{-\infty}^{\infty} f(t) e^{-j \omega t} dt$ in the sentence.

Surrounding the equation in 2 \$ symbols makes it a full-line equation instead
of an in-line equation

$$F( j \omega ) = \int\limits_{-\infty}^{\infty} f(t) e^{-j \omega t} dt$$

### Common Symbols that are used in engineering:

| Symbol                                         | Latex Reference                                |
| ---------------------------------------------- | ---------------------------------------------- |
| $\alpha$                                       | `\alpha`                                       |
| $\beta$                                        | `\beta`                                        |
| $\omega$                                       | `\omega`                                       |
| $\Omega$                                       | `\Omega`                                       |
| $\sum\limits$                                  | `\sum`                                         |
| $\int$                                         | `\int`                                         |
| $\therefore$                                   | `\therefore`                                   |
| $\longrightarrow$                              | `\longrightarrow`                              |
| $\Longrightarrow$                              | `\Longrightarrow`                              |
| $\text{Text}$                                  | `\text{Text}`                                  |
| $\begin{bmatrix}1 && 0 \\ 0 && 1\end{bmatrix}$ | `\begin{bmatrix}1 && 0 \\ 0 && 1\end{bmatrix}` |
| $\frac{a}{b}$                                  | `\frac{a}{b}`                                  |

# Summary

Now that you know how to do some basic operations using $\LaTeX$, let's see how
we can put the power of markdown and $\LaTeX$ together by going to the next
[file](./obsidian.md) which talks a bit about obsidian.
