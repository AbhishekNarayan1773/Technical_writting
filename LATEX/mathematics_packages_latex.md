Mathematical Typesetting in LaTeX

1. Introduction

LaTeX provides powerful tools for writing mathematical expressions, equations, formulas, and symbols. It is widely used in academic papers, research documents, and technical reports.

2. Inline and Display Mathematics

LaTeX supports two common ways to write mathematical expressions.

Inline Mathematics

Inline mathematics is used to display an equation within a sentence.

Example:

The equation is $a^2 + b^2 = c^2$.

Display Mathematics

Display mathematics shows an equation separately in the center of the page.

Example:

\[
a^2 + b^2 = c^2
\]

3. Superscripts and Subscripts

Superscripts and subscripts are used to represent powers and indices.

Command	Output
x^2	x²
x_i	xᵢ
x_i^2	xᵢ²
a^{n+1}	aⁿ⁺¹

Example:

\[
x_1, x_2, x_3, \ldots, x_n
\]
\[
a^{n+1} + b^{n+1}
\]

4. Fractions and Square Roots

LaTeX provides commands for fractions and roots.

Fraction

\[
\frac{a+b}{c+d}
\]

Square Root

\[
\sqrt{x^2+y^2}
\]

nth Root

\[
\sqrt[n]{x}
\]

5. Greek Letters

Greek letters are commonly used in mathematical and scientific expressions.

Examples:

\[
\alpha, \beta, \gamma, \delta, \theta, \lambda
\]
\[
\pi, \sigma, \omega, \mu, \phi
\]

Capital Greek letters can also be written using commands such as \Gamma, \Delta, \Theta, and \Omega.

6. Mathematical Operators

LaTeX supports various mathematical operators.

\[
\sum_{i=1}^{n} i
\]
\[
\prod_{i=1}^{n} i
\]
\[
\lim_{x \to 0} \frac{\sin x}{x}
\]
\[
\int_a^b f(x)\,dx
\]

7. Aligning Multiple Equations

The align environment is used to align multiple equations.

\begin{align}
a+b &= c \\
x+y &= z \\
m+n &= p
\end{align}

The & symbol specifies the alignment point, and \\ starts a new line.

8. Matrices

Matrices can be created using the matrix environment.

\[
A =
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

Other matrix environments include:

* matrix
* pmatrix – Parentheses
* bmatrix – Square brackets
* vmatrix – Vertical bars
* Bmatrix – Curly braces

9. Practical Files

This folder contains the following practical programs:

File Name	Description
equations.tex	Demonstrates mathematical equations, fractions, roots, and Greek symbols.
matrices.tex	Demonstrates matrix creation and mathematical alignment.

10. Compilation

To compile a LaTeX file using the terminal:

pdflatex equations.tex

For the matrix example:

pdflatex matrices.tex

The commands generate PDF output files.

11. Conclusion

Mathematical typesetting is one of the most important features of LaTeX. It allows users to create professional mathematical documents with properly formatted equations, symbols, matrices, and expression