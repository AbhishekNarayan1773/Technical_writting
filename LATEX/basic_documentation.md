01 – Basics and Document Structure

1. Introduction

LaTeX is a document preparation system used to create high-quality technical and academic documents. It works using markup commands that define the structure and formatting of a document.

Unlike traditional word processors, LaTeX separates content from formatting, making it easier to maintain consistency in large documents.

2. Basic Structure of a LaTeX Document

A basic LaTeX document consists of two main parts:

1. Preamble: Contains document settings, packages, title, author, and other configurations.
2. Document Body: Contains the actual content of the document.

Example

\documentclass{article}
\usepackage{amsmath}
\usepackage{graphicx}
\title{My First LaTeX Document}
\author{Abhishek Narayan Hathwala}
\date{\today}
\begin{document}
\maketitle
\section{Introduction}
This is my first document using LaTeX.
\section{Conclusion}
LaTeX is useful for technical documentation.
\end{document}

3. Document Classes

The \documentclass command defines the type of document.

Common document classes:

Document Class	Purpose
article	Articles and assignments
report	Reports and projects
book	Books and long documents
letter	Formal letters
beamer	Presentations

Example:

\documentclass[12pt,a4paper]{article}

4. Preamble and Packages

The preamble is the section before \begin{document}.

Packages provide additional functionality.

Examples:

\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{geometry}

* amsmath: Mathematical equations.
* graphicx: Inserting images.
* xcolor: Text and background colours.
* geometry: Page margins and dimensions.

5. Text Formatting

LaTeX provides different commands for formatting text.

Command	Description
\textbf{Text}	Bold text
\textit{Text}	Italic text
\underline{Text}	Underlined text
\emph{Text}	Emphasized text 
\texttt{Text}	Monospaced text

Example:
\textbf{Bold Text}
\textit{Italic Text}
\underline{Underlined Text}

6. Sections and Subsections

LaTeX provides commands to organize documents into different sections.

\section{Introduction}
\subsection{Overview}
\subsubsection{Details}

These commands automatically generate numbered headings.

7. Lists in LaTeX

Unordered List

The itemize environment creates bullet points.

\begin{itemize}
    \item Introduction
    \item Features
    \item Applications
\end{itemize}

Ordered List

The enumerate environment creates numbered lists.

\begin{enumerate}
    \item Create a document.
    \item Add content.
    \item Compile the document.
\end{enumerate}

8. Comments in LaTeX

Comments are ignored during compilation and are useful for adding notes.

% This is a comment.

9. Compiling a LaTeX Document

To convert a .tex file into a PDF, use a LaTeX compiler.

Example:

pdflatex basic_document.tex

Alternatively, use the online LaTeX editor Overleaf.

10. Practical Exercises

1. Create a basic LaTeX document.
2. Add a title, author, and date.
3. Create sections and subsections.
4. Apply bold, italic, and underline formatting.
5. Create ordered and unordered lists.
6. Compile the document into PDF format.

11. Conclusion

Understanding the basic structure and formatting commands is the first step toward learning LaTeX. These concepts provide the foundation for creating structured, readable, and professional technical documents.