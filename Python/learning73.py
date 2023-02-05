import PyPDF2,os
os.chdir(fr'C:\Users\Bhardwaj\Desktop')

with open('CV Kirti Yash Bhardwaj_ 2021.pdf','rb') as file:
    print(file)

    reader = PyPDF2.PdfFileReader(file)
    print(reader.numPages)