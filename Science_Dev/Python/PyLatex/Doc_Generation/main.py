#Imports: The script imports necessary classes and functions from the PyLaTeX library
from pylatex import Command, Document, Section, Subsection
from pylatex.utils import NoEscape, italic


if __name__ == "__main__":
  # Basic LaTex document generation
  # doc = Document() creates a new LaTeX document without specifying a filename
  # The next three lines add a title, author, and date to the preamble of the document, which are then formatted with the \maketitle command
  # doc.generate_pdf("basic_maketitle", clean_tex=False) generates a PDF with the filename "basic_maketitle"
  doc = Document()
  doc.preamble.append(Command("title", "First Title"))
  doc.preamble.append(Command("author", "Your Name"))
  doc.preamble.append(Command("date", NoEscape(r"\today")))
  doc.append(NoEscape(r"\maketitle"))
