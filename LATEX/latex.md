LaTeX Documentation

1. Introduction

LaTeX is a high-quality typesetting system widely used for creating scientific, technical, and academic documents. It is especially useful for documents containing mathematical equations, formulas, tables, references, and complex formatting.

Unlike traditional word processors, LaTeX uses markup commands to define the structure and formatting of a document.

2. Features of LaTeX

* Professional document formatting.
* Supports complex mathematical equations.
* Automatic numbering of sections, figures, and tables.
* Bibliography and citation management.
* Cross-referencing.
* Supports multiple document types.
* Easy management of large documents.

3. Basic Structure of a LaTeX Document

Every LaTeX document generally contains two main parts:

1. Preamble
2. Document body

Example:

\documentclass{article}
\usepackage{amsmath}
\usepackage{graphicx}
\title{Introduction to LaTeX}
\author{Abhishek Narayan Hathwala}
\date{\today}
\begin{document}
\maketitle
\section{Introduction}
This is my first LaTeX document.
\section{Conclusion}
LaTeX is useful for technical documentation.
\end{document}

4. Text Formatting

Common formatting commands:

Command	Purpose
\textbf{Text}	Bold text
\textit{Text}	Italic text
\underline{Text}	Underlined text
\emph{Text}	Emphasized text
\texttt{Text}	Typewriter font

5. Mathematical Equations

LaTeX is particularly useful for writing mathematical expressions.

Inline equation:

The equation is $a^2+b^2=c^2$.

Displayed equation:

\[
E = mc^2
\]

Fraction:

\[
\frac{a+b}{c}
\]

Summation:

\[
\sum_{i=1}^{n} i = \frac{n(n+1)}{2}
\]

6. Lists in LaTeX

Unordered List

\begin{itemize}
    \item LaTeX
    \item Beamer
    \item Doxygen
\end{itemize}

Ordered List

\begin{enumerate}
    \item Introduction
    \item Implementation
    \item Conclusion
\end{enumerate}

7. Tables

Example:

\begin{tabular}{|c|c|}
\hline
Subject & Marks \\
\hline
Mathematics & 90 \\
Computer Science & 95 \\
\hline
\end{tabular}

8. Images in LaTeX

The graphicx package is used to insert images.

\usepackage{graphicx}
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{image.png}
    \caption{Sample Image}
\end{figure}

9. Applications of LaTeX

* Research papers
* Academic assignments
* Technical reports
* Books and journals
* Mathematical documentation
* Scientific publications

10. Conclusion

LaTeX is a powerful tool for preparing professional documents. Its structured approach, mathematical capabilities, and automatic formatting features make it an important tool for technical writing.