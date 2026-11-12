Tables, Graphics and Colors in LaTeX

1. Introduction

LaTeX provides several packages and environments to insert tables, images, and colors into documents. These features help create professional and visually appealing technical documents.

2. Creating Tables

The tabular environment is used to create tables in LaTeX.

Example:

\begin{tabular}{|c|c|c|}
\hline
Name & Roll Number & Branch \\
\hline
Abhishek & 2025UCP1029 & CSE \\
Rahul & 2025UCP1030 & CSE \\
\hline
\end{tabular}

Alignment Options

Symbol	Description
l	Left alignment
c	Center alignment
r	Right alignment
`	`

3. Table with Caption and Label

The table environment allows users to add captions and labels.

\begin{table}[h]
\centering
\caption{Student Information}
\label{tab:students}
\begin{tabular}{|c|c|}
\hline
Name & Branch \\
\hline
Abhishek & CSE \\
Rahul & CSE \\
\hline
\end{tabular}
\end{table}

4. Inserting Images

The graphicx package is used to insert images into a LaTeX document.

\usepackage{graphicx}

Example:

\begin{figure}[h]
\centering
\includegraphics[width=0.6\textwidth]{image.png}
\caption{Sample Image}
\label{fig:sample}
\end{figure}

The image file should be placed in the same directory as the .tex file, or its correct path should be provided.

5. Image Scaling

The size of an image can be controlled using:

* width – Sets the image width.
* height – Sets the image height.
* scale – Scales the image proportionally.

Example:

\includegraphics[width=5cm]{image.png}

6. Using Colors

The xcolor package provides color support in LaTeX.

\usepackage{xcolor}

Example:

\textcolor{red}{Red Text}
\textcolor{blue}{Blue Text}
\colorbox{yellow}{Highlighted Text}

7. Defining Custom Colors

Custom colors can be defined using RGB values.

\definecolor{myblue}{RGB}{0,100,200}
\textcolor{myblue}{Custom Blue Text}

8. Practical Files

File Name	Description
tables.tex	Demonstrates table creation, alignment, captions, and labels.
graphics.tex	Demonstrates image insertion, scaling, and color formatting.

9. Compilation

Compile the practical files using:

pdflatex tables.tex
pdflatex graphics.tex

Ensure that all required image files are available in the correct directory before compilation.

10. Conclusion

Tables, graphics, and colors make LaTeX documents more informative and readable. These features are especially useful when preparing assignments, technical reports, research papers, and academic documentationn