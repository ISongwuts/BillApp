from docxtpl import DocxTemplate
from docx2pdf import convert
from pdf2image import convert_from_path
import os
import glob

class DocumentGenerator:
    def render(self, name, addr, billNumber, date, taxid, total, productList):
            import os
            BASE_DIR = os.path.dirname(os.path.abspath(__file__))
            
            PrimaryDocument = DocxTemplate("template/PrimaryTemplate.docx")
            PrimaryOutput = os.path.join(BASE_DIR, "generator/doc/generator_bill_primary.docx")

            SecondaryDocument = DocxTemplate("template/SecondaryTemplate.docx")
            SecondaryOutput = os.path.join(BASE_DIR, "generator/doc/generator_bill_secondary.docx")
            thai_month = ["ม.ค.", "ก.พ.", "มี.ค.", "เม.ย.", "พ.ค.", "มิ.ย.", "ก.ค.", "ส.ค.", "ก.ย.", "ต.ค.", "พ.ย.", "ธ.ค."]
            month, day, year = date.split("/")
            formatDateThai = f"{day} {thai_month[int(month)-1]} {year}"

            PrimaryDocument.render({
                "CustomerName":name,
                "CustomerAddress":addr,
                "BillNumber":billNumber,
                "Date":formatDateThai,
                "TaxID":taxid,
                "Total": total,
                "productList":productList})
            PrimaryDocument.save(PrimaryOutput)

            SecondaryDocument.render({
                "CustomerName":name,
                "CustomerAddress":addr,
                "BillNumber":billNumber,
                "Date":formatDateThai,
                "TaxID":taxid,
                "Total": total,
                "productList":productList})
            SecondaryDocument.save(SecondaryOutput)

            if os.path.exists(PrimaryOutput) and os.path.exists(SecondaryOutput):
                pdfCounter = len(glob.glob1("generator/pdf/primary/","*.pdf"))
                pngCounter = len(glob.glob1("generator/png/primary/","*.png"))
                convert(PrimaryOutput, f"generator/pdf/primary/converted_{pdfCounter+1}_primary.pdf")
                convert(SecondaryOutput, f"generator/pdf/secondary/converted_{pdfCounter+1}_secondary.pdf")

                print(PrimaryOutput)
                pagePrimary = convert_from_path(f"generator/pdf/primary/converted_{pdfCounter+1}_primary.pdf", dpi=95)
                pageSecondary = convert_from_path(f"generator/pdf/secondary/converted_{pdfCounter+1}_secondary.pdf", dpi=95)
                for i, page in enumerate(pagePrimary):
                    page.save(f"generator/png/primary/converted_{pngCounter+1}_primary.png", "PNG")
                for i, page in enumerate(pageSecondary):
                    page.save(f"generator/png/secondary/converted_{pngCounter+1}_secondary.png", "PNG")

                return True
            return False
        

